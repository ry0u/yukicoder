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
    vector<int> l(3),v(3);

    rep(i,3) cin >> l[i];
    rep(i,3) cin >> v[i];

    sort(l.begin(),l.end());
    sort(v.begin(),v.end());

    int ans = INF;

    do {
        do {
            int a = (l[0] + l[1]) * 2;
            int b = (l[0] + l[2]) * 2;
            int c = (l[1] + l[2]) * 2;
        
            ans = min(ans,a*v[0] + b*v[1] + c*v[2]);
        
        } while(next_permutation(v.begin(),v.end()));
    } while(next_permutation(l.begin(),l.end()));
    
    cout << ans << endl;
    return 0;
}
