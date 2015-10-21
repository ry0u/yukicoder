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

    vector<int> g(n),d(n);
    rep(i,n) {
        cin >> g[i] >> d[i];
    }

    bool flag = false;
    int id;

    rep(i,n) {
        if(3000000 <= 6 * (g[i] - 30000*d[i])) {
            flag = true;
            id = i;
        }
    }

    if(flag) {
        cout << "YES" << endl;
        rep(i,6) cout << id+1 << endl;
    } else cout << "NO" << endl;
    

    return 0;
}
