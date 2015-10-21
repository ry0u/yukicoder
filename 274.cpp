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
    int n,m;
    cin >> n >> m;

    int cnt[4005];
    memset(cnt,0,sizeof(cnt));

    rep(i,n) {
        int a,b;
        cin >> a >> b;

        REP(j,a,b+1) {
            cnt[j]++;
        }

        int c = m-1-b;
        int d = m-1-a;

        if(c == a && d == b) continue;


        REP(j,c,d+1) {
            cnt[j]++;
        }
    }

    bool flag = true;
    rep(i,m) {
        if(cnt[i] >= 3) flag = false;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
