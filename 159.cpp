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
    double p,q;
    cin >> p >> q;

    double res = (1-p) * (1.0-q);
    double ret = p * (1.0-q) * (1.0 - q);

    if(res < ret) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
