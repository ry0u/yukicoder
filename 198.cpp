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
    int b,n;
    cin >> b >> n;

    ll sum = b;
    vector<int> v(n);
    rep(i,n) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(),v.end());

    set<int> st;
    st.insert(sum/n);
    rep(i,n) st.insert(v[i]);

    ll ans = 10000000000LL + 5;
    set<int>::iterator ite;
    for(ite = st.begin(); ite != st.end(); ite++) {
        ll cnt = 0, q = b;
        rep(i,n) {
            if(v[i] > *ite) {
                q += v[i] - *ite;
                cnt += v[i] - *ite;
            }
        }

        rep(i,n) {
            if(v[i] < *ite) {
                q -= *ite - v[i];
                cnt += *ite - v[i];
            }
        }

        if(q >= 0) {
            ans = min(ans,cnt);
        }
    }

    cout << ans << endl;



    return 0;
}
