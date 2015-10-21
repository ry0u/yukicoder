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
    int n;
    cin >> n;

    map<ll,ll> res = prime_factor(n);
    int ans = 0;

    map<ll,ll>::iterator ite;
    for(ite = res.begin(); ite != res.end(); ite++) {
        ans ^= ite->second;
    }

    if(ans) cout << "Alice" << endl;
    else cout << "Bob" << endl;

    return 0;
}
