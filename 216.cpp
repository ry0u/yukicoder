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

    vector<int> v(n),id(n);
    rep(i,n) cin >> v[i];
    rep(i,n) cin >> id[i];

    vector<int> p(105,0);
    int sum = 0;

    rep(i,n) {
        if(id[i] == 0) {
            sum += v[i];
            continue;
        }
        p[id[i]-1] += v[i];
    }

    int vmax = 0;
    rep(i,105) vmax = max(vmax,p[i]);

    if(sum >= vmax) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
