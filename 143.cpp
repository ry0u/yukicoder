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
    int k,n,f;
    cin >> k >> n >> f;

    vector<int> v(f);
    rep(i,f) {
        cin >> v[i];
    }

    int sum = k*n;
    rep(i,f) {
        sum -= v[i];
    }

    if(sum < 0) {
        cout << -1 << endl;
    }else {
        cout << sum << endl;
    }

    return 0;
}
