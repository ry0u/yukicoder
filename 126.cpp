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
    int a,b,s;
    cin >> a >> b >> s;

    if(s == 1) {
        if(a == 0) cout << 2 << endl;
        else cout << a << endl;
    } else {
        if(abs(a-s) <= abs(b-s)) {
            cout << s + abs(a-s) << endl;
        } else {
            int ans = abs(b-s);
            ans += min(s-1,abs(a-s));
            ans += a == 0 ? 2 : a;

            cout << ans << endl;
        }
    }

    return 0;
}
