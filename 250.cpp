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

ll dp[5005][5005];

int main() {
    int n;
    cin >> n;

    memset(dp,0,sizeof(dp));
    rep(i,5005) {
        dp[i][0] = 1;
        dp[i][i] = 1;

        REP(j,1,i) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];

            if(dp[i][j] > 1e17) {
                dp[i][j] = 1e17;
            }
        }
    }

    rep(q,n) {
        ll d,x,t;
        cin >> d >> x >> t;

        if(dp[x+d-1][d-1] <= t) cout << "AC" << endl;
        else cout << "ZETUBOU" << endl;
    }


    return 0;
}
