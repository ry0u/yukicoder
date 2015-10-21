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

int n;
vector<int> G[100005];
int d[100005],d2[100005];
bool used[100005],inQ[100005];

int main() {
    cin >> n;

    rep(i,n-1) {
        int s,t;
        cin >> s >> t;

        s--;
        t--;

        G[s].push_back(t);
        G[t].push_back(s);
    }

    queue<P> que;
    que.push(P(0,0));

    memset(used,0,sizeof(used));
    used[0] = true;

    memset(d,0,sizeof(d));

    while(que.size()) {
        P p = que.front();
        que.pop();

        int now = p.first;
        int cnt = p.second;

        rep(i,G[now].size()) {
            int next = G[now][i];

            if(!used[next]) {
                used[next] = true;
                d[next] = cnt+1;
                que.push(P(next,cnt+1));
            }
        }
    }

    vector<int> leaf;
    rep(i,n) {
        if(G[i].size() == 1) {
            leaf.push_back(i);
        }
    }


    memset(inQ,0,sizeof(inQ));
    memset(used,0,sizeof(used));
    memset(d2,0,sizeof(d2));

    rep(i,leaf.size()) {
        inQ[leaf[i]] = true;
        used[leaf[i]] = true;
        que.push(P(leaf[i],0));
    }

    while(que.size()) {
        P p = que.front();
        que.pop();
        inQ[p.first] = false;

        int now = p.first;
        int cnt = p.second;

        rep(i,G[now].size()) {
            int next = G[now][i];

            if(!used[next] && !inQ[next]) {
                used[next] = true;
                inQ[next] = true;
                d2[next] = cnt+1;
                que.push(P(next,cnt+1));
            }
        }
    }

    rep(i,n) {
        cout << min(d[i],d2[i]) << endl;
    }


    return 0;
}
