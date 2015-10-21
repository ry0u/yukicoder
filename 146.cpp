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
#define MOD 1000000007
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
    int n;
    cin >> n;

    vector<ll> c(n),d(n);
    rep(i,n) {
        cin >> c[i] >> d[i];
    }

    ll ans = 0;

    rep(i,n) {
        ll ret = c[i]/2 + c[i]%2;
        ret %= MOD;
        ret *= (d[i]%MOD);
        ret %= MOD;

        ans += ret;
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}
