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
    int a,b,c;
    cin >> a >> b >> c;

    int x = a / b + (a%b != 0);
    int y = a / c + (a%c != 0);

    double res = x * (2.0 / 3);
    if(res >= y) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
