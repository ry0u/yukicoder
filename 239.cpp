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

    vector< vector<string> > v(n,vector<string>(n));
    rep(i,n) {
        rep(j,n) {
            cin >> v[i][j];
        }
    }

    set<int> st;
    rep(i,n) {
        bool flag = true;
        rep(j,n) {
            if(v[j][i] == "nyanpass") continue;
            if(v[j][i] == "-") continue;

            flag = false;
        }

        if(flag) st.insert(i+1);
    }

    if(st.size() == 1) cout << *(st.begin()) << endl;
    else cout << -1 << endl;

    return 0;
}
