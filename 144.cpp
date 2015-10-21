#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <cmath>

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
    double p;
    cin >> n >> p;

    int prime[1000005];
    rep(i,n+1) prime[i] = 1;

    REP(i,2,n+1) {
        for(int j=0;i*(j+2)<=n;j++) {
            prime[i*(j+2)]++;
        }
    }

    double ans = 0;
    REP(i,2,n+1) {
        ans += pow(1-p,prime[i]-1);
    }

    cout << fixed;
    cout.precision(10);
    cout << ans << endl;

    return 0;
}
