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
    int t;
    cin >> t;

    rep(q,t) {
        int n;
        cin >> n;

        vector<int> v(n);
        map<int,int> m;
        rep(i,n) {
            cin >> v[i];
            m[v[i]]++;
        }

        priority_queue<int> que;
        map<int,int>::iterator ite;
        for(ite = m.begin(); ite != m.end(); ite++) {
            que.push(ite->second);
        }

        int cnt = 0;
        while(que.size() > 2) {
            cnt++;
            vector<int> t(3);

            rep(i,3) {
                t[i] = que.top();
                que.pop();
            }

            rep(i,3) {
                if(t[i] == 1) continue;
                que.push(t[i]-1);
            }
        }

        cout << cnt << endl;

    }
    return 0;
}
