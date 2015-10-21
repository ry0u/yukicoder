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

    map<int,int> m;
    rep(i,n) {
        int a;
        cin >> a;

        m[a]++;
    }

    int ans = 0;
    map<int,int>::iterator ite;
    for(ite = m.begin(); ite != m.end(); ite++) {
        if(ite->second == 1) ans++;
    }

    cout << ans << endl;

    return 0;
}
