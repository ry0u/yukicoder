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

int dx[8] = {-2,-2,-1,-1, 1, 1, 2, 2};
int dy[8] = {-1, 1,-2,+2,-2, 2,-1, 1};

int main() {
    int x,y;
    cin >> x >> y;

    queue<pair<pair<int,int>,int > > que;
    que.push(mp(mp(0,0),0));

    set<P> st;
    st.insert(P(0,0));

    while(que.size()) {
        P p = que.front().first;
        int cnt = que.front().second;
        que.pop();

        rep(i,8) {
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];

            if(st.find(P(ny,nx)) == st.end() && cnt <= 2) {
                st.insert(P(ny,nx));
                que.push(mp(mp(ny,nx),cnt+1));
            }
        }
    }

    if(st.find(P(y,x)) != st.end()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}
