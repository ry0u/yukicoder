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
    int n,l;
    cin >> n >> l;

    vector<P> v(n);
    vector<int> t(n);

    rep(i,n) {
        cin >> v[i].first >> v[i].second >> t[i];
    }

    ll d = 0,cnt = 0;
    rep(i,n) {
        if(d < v[i].first) {
            cnt += v[i].first - d;
            d += v[i].first - d;
        }

        int sw = cnt / t[i];
        int q = t[i] - cnt%t[i];

        if(sw % 2 == 0) {
            if(q < v[i].second) {
                cnt += q;
                cnt += t[i];
                cnt += v[i].second;
                d += v[i].second;
            } else {
                cnt += v[i].second;
                d += v[i].second;
            }
        } else {
            cnt += q;
            cnt += v[i].second;
            d += v[i].second;
        }
    }

    if(d < l) cnt += l-d;

    cout << cnt << endl;

    return 0;
}
