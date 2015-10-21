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

    double a = (10000 - n) / 100.0;
    double b = n * 0.99;
    double ans = (a / (a+b)) * 100;

    cout << fixed;
    cout.precision(20);
    cout << ans << endl;

    return 0;
}
