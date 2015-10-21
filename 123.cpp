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
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> v(n);
    rep(i,n) v[i] = i+1;

    rep(i,m) {
        int a;
        cin >> a;

        vector<int> t(v.begin(),v.end());

        v.clear();
        v.push_back(t[a-1]);

        rep(j,n) {
            if(j == a-1) continue;
            v.push_back(t[j]);
        }
    }

    cout << v[0] << endl;

    return 0;
}
