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
#define inf 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
    int W,H,N;
    cin >> W >> H >> N;

    map<int,int> w,h;
    ll ans = 0;
    rep(i,N) {
        int s,k;
        cin >> s >> k;

        bool wn = (w.find(s) == w.end());
        bool hn = (h.find(k) == h.end());

        ll diff = ans;
        if(wn && hn) {
            ans += W - 1 - w.size();
            ans += H - 1 - h.size();
            ans++;
        } else {
            if(wn) {
                ans += H - h.size();
            }

            if(hn) {
                ans += W - w.size();
            }
        }

        w[s]++;
        h[k]++;
    }

    cout << ans - N << endl;
    return 0;
}
