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

bool is_prime(ll n) {
    for(ll i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
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

map<ll,ll> prime_factor(ll n) {
    map<ll,ll> res;
    for(ll i=2; i*i <= n; i++) {
        while(n%i == 0) {
            res[i]++;
            n /= i;
        }
    }

    if(n != 1) res[n] = 1;
    return res;
}

int main() {
    ll n;
    cin >> n;

    vector<ll> v = divisor(n);
    int cnt = 0;
    rep(i,v.size()) {
        if(!is_prime(v[i])) cnt++;
    }

    if(cnt) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
