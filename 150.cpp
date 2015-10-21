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
    int t;
    cin >> t;

    rep(q,t) {
        string s;
        cin >> s;

        int n = s.size();
        string g = "good", p = "problem";

        int ans = INF;
        rep(i,n) {
            REP(j,i+4,n-6) {
                int cnt = 0;

                string t = s.substr(i,4);
                rep(k,4) {
                    if(t[k] != g[k]) cnt++;

                }

                string t2 = s.substr(j,7);
                rep(k,7) {
                    if(t2[k] != p[k]) cnt++;
                }

                ans = min(ans,cnt);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
