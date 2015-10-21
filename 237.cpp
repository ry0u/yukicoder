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

vector<ll> prime;
void init() {
    int k = 1;
    while(true) {
        ll a = 2, b = 1;

        REP(i,1,k) {
            b *= 2;
        }

        REP(i,1,b) {
            a *= 2;
        }

        if(a > 1000000005) break;
        k++;
        prime.push_back(a+1);
    }
}

int main() {
    int n;
    cin >> n;

    int ans = 0;

    init();

    rep(i,1<<prime.size()) {
        ll a = 1;

        rep(j,1<<prime.size()) {
            if(i & (1<<j)) {
                a *= prime[j];
            }
        }

        while(a <= n) {
            if(a >= 3) ans++;
            a *= 2;
        }
    }

    cout << ans << endl;

    return 0;
}
