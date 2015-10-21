#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <queue>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int w,h,x,y;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
vector<string> s;

bool can(int y,int x) {
    if(0 <= y && y < h && 0 <= x && x < w) return true;
    return false;
}

bool used[25][25];
void dfs(int y,int x,vector<int>& v) {
    if(used[y][x]) return;
    used[y][x] = true;
    v.push_back(y*w + x);

    rep(i,4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(can(ny,nx) && s[ny][nx] == '.') {
            dfs(ny,nx,v);
        }
    }
}

int main() {
    cin >> w >> h;

    s.resize(h);
    rep(i,h) cin >> s[i];

    vector< vector<int> > a(2);
    memset(used,0,sizeof(used));

    int id = 0;
    rep(i,h) {
        rep(j,w) {
            if(used[i][j]) continue;
            if(s[i][j] == '.') {
                dfs(i,j,a[id]);
                id++;
            }
        }
    }
    
    int ans = INF;
    rep(i,a[0].size()) {
        rep(j,a[1].size()) {
            int x = a[0][i]/w;
            int y = a[0][i]%w;

            int x2 = a[1][j]/w;
            int y2 = a[1][j]%w;

            ans = min(ans, abs(x2-x) + abs(y2-y) - 1);
            // queue<P> que;
            // que.push(P(a[0][i],0));
            // memset(used,0,sizeof(used));
            //
            // while(que.size()) {
            //     P p = que.front();
            //     que.pop();
            //
            //     if(p.first == a[1][j]) {
            //         ans = min(ans,p.second);
            //         break;
            //     }
            //
            //     int y = p.first / w;
            //     int x = p.first % w;
            //
            //     used[y][x] = true;
            //     rep(k,4) {
            //         int ny = y + dy[k];
            //         int nx = x + dx[k];
            //
            //         if(can(ny,nx) && !used[ny][nx]) {
            //             if(s[ny][nx] == '.') {
            //                 que.push(P(ny*w+nx,p.second));
            //             }
            //             if(s[ny][nx] == '#') {
            //                 que.push(P(ny*w+nx,p.second+1));
            //             }
            //         }
            //     }
            // }
        }
    }

    cout << ans << endl;


    return 0;
}
