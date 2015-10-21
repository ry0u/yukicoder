#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int w,h;
vector<string> s;

bool can(int y,int x) {
    if(0 <= y && y < h && 0 <= x && x < w) return true;
    return false;
}

int main() {
    cin >> h >> w;

    bool f = false;

    s.resize(h);
    rep(i,h) {
        cin >> s[i];

        rep(j,w) {
            if(s[i][j] == '#') f = true;
        }
    }

    if(!f) {
        cout << "NO" << endl;
        return 0;
    }

    f = false;

    rep(dy,h) {
        if(f) break;
        REP(dx,-w+1,w) {
            if(dy == 0 && dx == 0) continue;
            bool used[55][55];
            memset(used,0,sizeof(used));

            bool flag = true;

            rep(i,h) {
                rep(j,w) {
                    if(s[i][j] == '#' && !used[i][j]) {
                        int y = i + dy;
                        int x = j + dx;

                        if(can(y,x) && !used[y][x] && s[y][x] == '#') {
                            used[y][x] = true;
                        }
                        else  {
                            flag = false;
                        }
                    }
                }
            }

            if(flag) {
                f = true;
            }
        }
    }

    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
