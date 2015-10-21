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
    string s,t;
    cin >> s >> t;
    s += t;

    int ans = 0;
    rep(i,s.size()) {
        if(s[i] == 'x') continue;
        int cnt = 1;
        REP(j,i+1,s.size()) {
            if(s[j] == 'o') {
                i++;
                cnt++;
                continue;
            } else break;
        }

        ans = max(ans,cnt);
    }

    cout << ans << endl;

    return 0;
}
