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
    int n;
    cin >> n;

    vector<int> v(n);
    rep(i,n) cin >> v[i];

    int dp[1005][2];
    memset(dp,0,sizeof(dp));

    dp[0][1] = v[0];
    dp[1][0] = v[0];
    dp[1][1] = v[1];

    REP(i,2,n) {
        dp[i][0] = max(dp[i-1][1],dp[i-2][1]);
        dp[i][1] = max(dp[i-1][0] + v[i],dp[i-2][1] + v[i]);
    }

    cout << max(dp[n-1][0],dp[n-1][1]) << endl;


    return 0;
}
