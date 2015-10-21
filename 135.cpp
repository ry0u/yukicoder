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

    int ans = INF;
    rep(i,n-1) {
        if(v[i] == v[i+1]) continue;
        ans = min(ans,abs(v[i]-v[i+1]));
    }

    if(ans == INF) ans = 0;
    cout << ans << endl;

    return 0;
}
