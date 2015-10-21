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
    int aw,ab,bw,bb;
    cin >> aw >> ab >> bw >> bb;

    int c,d;
    cin >> c >> d;

    int ans = aw;
    c -= ab;

    if(c > 0) {
        ans -= c;
        bw += c;
    }

    ans += min(bw,d);
    cout << ans << endl;

    return 0;
}
