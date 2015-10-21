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

int ch(char c) {
    if('0' <= c && c <= '9') {
        return c - '0';
    } else {
        return c - 'A' + 10;
    }
}

int main() {
    int n;
    cin >> n;

    ll ans = -1;
    rep(i,n) {
        string s;
        cin >> s;

        int vmax = 0;
        rep(j,s.size()) vmax = max(vmax, ch(s[j]));


        ll cnt = 0;
        ll t = 1;
        for(int j=s.size()-1;j>=0;j--) {
            cnt += ch(s[j]) * t;
            t *= (vmax + 1);
        }

        if(ans == -1) ans = cnt;
        else ans = min(ans,cnt);
    }

    cout << ans << endl;
    return 0;
}
