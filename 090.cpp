#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <queue>

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

    int cost[15][15];
    memset(cost,0,sizeof(cost));

    rep(i,m) {
        int s,t,c;
        cin >> s >> t >> c;

        cost[s][t] = c;
    }

    vector<int> id(n);
    rep(i,n) id[i] = i;

    int ans = 0;

    do {
        int sum = 0;
        rep(i,n) {
            rep(j,i) {
                sum += cost[id[i]][id[j]];
            }
        }

        ans = max(ans,sum);
    } while(next_permutation(id.begin(),id.end()));

    cout << ans << endl;

    return 0;
}
