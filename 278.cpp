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

ll gcd(ll a, ll b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

vector<ll> divisor(ll n) {
    vector<ll> res;
    for(ll i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            res.push_back(i);
            if(i != n/i) res.push_back(n/i);
        }
    }
    return res;
}

int main() {
    ll n;
    cin >> n;

    ll a = n;

    if(n%2 == 0) {
        a /= 2;
    }


    vector<ll> ret = divisor(a);
    ret.push_back(1);
    if(a != 1) ret.push_back(a);

    ll ans = 0;
    rep(i,ret.size()) {
        ans += ret[i];
    }

    cout << ans << endl;

    return 0;
}
