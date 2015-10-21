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

bool used[50005];

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i,n) cin >> a[i];

    memset(used,0,sizeof(used));
    used[0] = true;

    rep(i,n) {
        rep(j,50005) {
            if(used[j]) {
                int t = j;
                t ^= a[i];
                used[t] = true;
            }
        }
    }

    int cnt = 0;
    rep(i,50005) {
        if(used[i]) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
