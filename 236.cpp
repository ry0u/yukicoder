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
    double a,b,x,y;
    cin >> a >> b >> x >> y;

    if(x < y) {
        swap(a,b);
        swap(x,y);
    }

    double ans = 0;
    double t = a / b;
    if(x >= y*t) {
        ans = max(ans,y + y*t);
    }

    t = b / a;
    if(y >= x*t) {
        ans = max(ans,x + x*t);
    }

    cout << fixed;
    cout.precision(20);
    cout << ans << endl;

    return 0;
}
