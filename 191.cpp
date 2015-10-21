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

    double sum = 0;
    rep(i,n) {
        sum += v[i];
    }

    sum /= 10.0;

    int ans = 0;
    rep(i,n) {
        if(v[i] <= sum) ans += 30;
    }

    cout << ans << endl;

    return 0;
}
