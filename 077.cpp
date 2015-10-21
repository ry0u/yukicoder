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

vector<int> init(int n) {
    vector<int> ret;
    rep(i,n/2) {
        ret.push_back(i+1);
    }
    ret.push_back(n/2+1);
    for(int i=n/2; i>0; i--) {
        ret.push_back(i);
    }
    return ret;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(1005);
    rep(i,n) cin >> v[i];

    int ans = INF;

    REP(size,1,1005) {
        if(size % 2 == 0) continue;
        vector<int> t = init(size);

        rep(i,n) {
            int a = 0, b = 0;

            rep(j,i) a += v[j];

            REP(j,i,size) {
                if(v[j] > t[j-i]) {
                    a += v[j] - t[j-i];
                }
                if(v[j] < t[j-i]) {
                    b += t[j-i] - v[j];
                }
            }

            REP(j,size,n) a += v[j];

            if(a >= b) {
                ans = min(ans,a);
            }
        }
    }

    cout << ans << endl;


    return 0;
}
