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
#define MOD 1000003

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

ll mod_pow(ll x,ll n) {
    ll res = 1;
    while(n > 0) {
        if(n&1) res = res * x % MOD;
        x = x * x % MOD;
        n >>= 1;
    }
    return res;
}

int main() {
    ll x,n;
    cin >> x >> n;

    vector<ll> v(n);
    rep(i,n) {
        cin >> v[i];
    }

    ll ans = 0;
    rep(i,n) {
        ans += mod_pow(x,v[i]);
        ans %= MOD;
    }

    cout << ans << endl;



    return 0;
}
