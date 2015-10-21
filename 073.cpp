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

map<char,ll> m;

bool check() {
    if(m['h'] >= 1 && m['e'] >= 1 && m['l'] >= 3 && m['o'] >= 2 && m['w'] >= 1 && m['r'] >= 1 && m['d'] >= 1) return true;
    return false;
}

int main() {
    rep(i,26) {
        char c = 'a' + i;
        ll x;
        cin >> x;

        m[c] = x;
    }

    if(check()) {
        ll ans = m['h'] * m['e'] * m['w'] * m['r'] * m['d'];
        ll t = m['o']/2;
        ans *= t * (m['o'] - t);

        ll vmax = 0;
        rep(i,m['l']+1) {
            vmax = max(vmax, i*(i-1)/2 * (m['l']-i));
        }
        ans *= vmax;

        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }


    return 0;
}
