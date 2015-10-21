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

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int a[4][4] = { {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,0} };

int main() {
    vector< vector<int> > v(4,vector<int>(4));
    rep(i,4) rep(j,4) cin >> v[i][j];

    bool flag = true;
    int res = 0;

    rep(i,4) {
        rep(j,4) {
            if(v[i][j] == 0) {
                res = abs(i-3);
                continue;
            }

            queue<pair<pair<int,int>,int > > que;
            que.push(mp(mp(i,j),0));

            bool used[5][5];
            memset(used,0,sizeof(used));
            used[i][j] = true;

            int cost = 0;
            while(que.size()) {
                P p = que.front().first;
                int cnt = que.front().second;
                que.pop();
                
                int y = p.first;
                int x = p.second;

                if(v[i][j] == a[y][x]) {
                    cost = cnt;
                    break;
                }

                used[y][x] = true;

                rep(k,4) {
                    int ny = y + dy[k];
                    int nx = x + dx[k];

                    if(0 <= ny && ny < 4 && 0 <= nx && nx < 4 && !used[ny][nx]) {
                        que.push(mp(mp(ny,nx),cnt+1));
                    }
                }
            }

            if(cost >= 2) {
                flag = false;
            }
        }
    }

    rep(i,4) {
        rep(j,4) {
            if(v[i][j] == 0) continue;
            REP(k,i,4) {
                if(k == i) {
                    REP(l,j+1,4) {
                        if(v[k][l] == 0) continue;
                        if(v[i][j] > v[k][l]) res++;
                    }
                } else {
                    rep(l,4) {
                        if(v[k][l] == 0) continue;
                        if(v[i][j] > v[k][l]) res++;
                    }
                }
            }
        }
    }


    if(flag && res%2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
