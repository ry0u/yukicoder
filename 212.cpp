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
    int p,c;
    cin >> p >> c;

    double s = (2 + 3 + 5 + 7 + 11 + 13) / 6.0;
    double t = (4 + 6 + 8 + 9 + 10 + 12) / 6.0;

    double ans = 1.0;
    rep(i,p) ans *= s;
    rep(i,c) ans *= t;

    cout << fixed;
    cout.precision(20);
    cout << ans<< endl;

    return 0;
}
