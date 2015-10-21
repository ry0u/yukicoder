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

    priority_queue<int,vector<int>,greater<int> > que;
    rep(i,n) {
        int c;
        cin >> c;
        
        que.push(c);
    }
    
    int sum = 0;
    while(que.size()) {
        int t = que.top();
        sum += t;

        if(sum > m) {
            break;
        }else if(sum == m) {
            que.pop();
            break;
        }

        que.pop();
    }

    cout << n - que.size() << endl;

    return 0;
}
