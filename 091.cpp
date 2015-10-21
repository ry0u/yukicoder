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

int main() {
    vector<int> v(3);
    int vmin = INF;
    rep(i,3) {
        cin >> v[i];
        vmin = min(vmin,v[i]);
    }

    int ans = vmin;
    rep(i,3) {
        v[i] -= vmin;
    }

    while(true) {
        int sum = 0;
        rep(i,3) sum += v[i];

        if(sum < 3) break;

        int imax = 0,vmax = 0,imin = 0;
        vmin = INF;
        rep(i,3) {
            if(vmax < v[i]) {
                vmax = v[i];
                imax = i;
            }

            if(vmin > v[i]) {
                vmin = v[i];
                imin = i;
            }
        }

        v[imin] += 1;
        v[imax] -= 2;

        vmin = INF;
        rep(i,3) {
            vmin = min(vmin,v[i]);
        }

        ans += vmin;
        rep(i,3) {
            v[i] -= vmin;
        }
    }

    cout << ans << endl;

    return 0;
}
