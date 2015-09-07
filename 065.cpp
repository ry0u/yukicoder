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
    int k;
    cin >> k;

    double dp[55];
    memset(dp,0,sizeof(dp));

    for(int i=k-1; i>=0; i--) {
        dp[i] = dp[i+1]/6 + dp[i+2]/6 + dp[i+3]/6 + dp[i+4]/6 + dp[i+5]/6 + dp[i+6]/6 + 1;
    }

    cout << dp[0] << endl;

    return 0;
}
