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
#define MOD 1000000000

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

ll dp[10005][10005];

int main() {
    ll n,m;
    cin >> n >> m;

    n = n/1000;
    if(n % m == 0) {
        cout << 1 << endl;
    } else {
        int d = n % m;
        rep(i,10005) {
            dp[i][0] = 1;
            dp[i][i] = 1;

            REP(j,1,i) {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                dp[i][j] %= MOD;
            }
        }

        cout << dp[m][d] << endl;
    }
    return 0;
}
