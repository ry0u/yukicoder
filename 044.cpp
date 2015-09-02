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

    vector<ll> dp(55);
    dp[0] = 1;
    dp[1] = 1;

    rep(i,n-1) {
        dp[i+2] = dp[i] + dp[i+1];
    }

    cout << dp[n] << endl;

    return 0;
}
