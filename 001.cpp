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
typedef pair<P,int> PP;

int n,c,v;

struct edge {
    int from,to;
    int cost,time;

    edge(int t,int c) : to(t),cost(c) {}
    edge(int f,int t,int c) : from(f),to(t),cost(c) {}
    edge(int f,int t,int c,int time) : from(f),to(t),cost(c),time(time) {}
    bool operator<(const edge &e) const {
        return cost < e.cost;
    }
};

vector<edge> G[55];
int d[55][305];

void dijkstra(int s,int n) {
    rep(i,n) rep(j,c+1) d[i][j] = INF;
    d[0][0] = 0;

    priority_queue<PP, vector<PP>, greater<PP> > que;
    que.push(mp(mp(0,0),0));

    while(que.size()) {
        int dist = que.top().first.first;
        int v = que.top().first.second;
        int time = que.top().second;

        que.pop();

        if(d[v][time] < dist) continue;

        rep(i,G[v].size()) {
            edge e = G[v][i];

            if(time + e.time <= c && d[e.to][time + e.time] > dist + e.cost) {
                d[e.to][time + e.time] = dist + e.cost;
                que.push(mp(mp(dist + e.cost, e.to), time + e.time));
            }
        }
    }
}

int main() {
    cin >> n >> c >> v;

    vector<int> S(v),T(v),Y(v),M(v);

    rep(i,v) cin >> S[i];
    rep(i,v) cin >> T[i];
    rep(i,v) cin >> Y[i];
    rep(i,v) cin >> M[i];

    rep(i,v) {
        edge e(S[i]-1,T[i]-1,M[i],Y[i]);
        G[S[i]-1].push_back(e);
    }

    dijkstra(0,n);

    int ans = INF;
    rep(i,c+1) {
        ans = min(ans, d[n-1][i]);
    }

    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
