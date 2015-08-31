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
    int n;
    cin >> n;

    vector<int> v(n);
    rep(i,n) {
        cin >> v[i];
    }

    int sum = 0;
    rep(i,n) {
        sum += v[i];
    }

    if(sum % 2 == 1) {
        cout << "impossible" << endl;
    } else {
        bool used[100*100 + 105];
        memset(used,0,sizeof(used));

        used[0] = true;

        rep(i,n) {
            vector<int> id;
            rep(j,100*100+5) {
                if(used[j]) {
                    id.push_back(j);
                }
            }

            rep(j,id.size()) {
                used[id[j] + v[i]] = true;
            }
        }

        if(used[sum/2]) cout << "possible" << endl;
        else cout << "impossible" << endl;
    }

    return 0;
}
