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
    ll x,y,d;
    cin >> x >> y >> d;

    if(x + y < d) {
        cout << 0 << endl;
    } else {
        if(d < y) {
            cout << min(min(d+1,x+1),y+1) << endl;
        } else {
            cout << min(min(x+y-d+1,x+1),y+1) << endl;
        }
    }

    return 0;
}
