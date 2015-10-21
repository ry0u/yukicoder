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
    sort(v.begin(),v.end());

    if(n % 2 == 1) {
        cout << v[n/2] << endl;
    } else  {
        double ans = v[n/2-1] + v[n/2];
        cout << ans / 2.0 << endl;
    }

    return 0;
}
