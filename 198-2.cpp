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

    vector<int> v(n);
    rep(i,n) cin >> v[i];

    ll left = 0, right = 1000000000;
    ll ans = INF;
    while(right - left > 1) {
        ll l = (left * 2 + right) / 3;
        ll r = (left + right * 2) / 3;

        ll cnt = 0, q = b;
        rep(i,n) {
            cnt += abs(v[i]-l);
            q += v[i] - l;
        }
        if(q < 0) cnt = INF;

        ll cnt2 = 0, q2 = b;
        rep(i,n) {
            cnt2 += abs(v[i]-r);
            q2 += v[i] - r;
        }
        if(q2 < 0) cnt = INF;

        if(cnt <= cnt2) {
            right = r;
        } else {
            left = l;
        }

        ans = min(ans,cnt);
        ans = min(ans,cnt2);
    }

    cout << ans << endl;

    return 0;
}
