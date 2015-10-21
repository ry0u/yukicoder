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
    int l;
    cin >> l;

    l /= 4;

    vector< vector<int> > v;

    REP(i,1,4005) {
        REP(j,i+1,4005) {
            if(i == j) continue;
            if((j-i)%2 == 0) continue;
            if(__gcd(i,j) != 1) continue;

            vector<int> t(3);
            t[0] = j*j - i*i;
            t[1] = 2*i*j;
            t[2] = j*j + i*i;

            v.push_back(t);
        }
    }

    int cnt = 0;
    rep(i,v.size()) {
        int sum = 0;
        rep(j,v[i].size()) sum += v[i][j];

        if(sum <= l) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
