#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

bool prime[10000000];
void Eratosthenes(int n) {
    rep(i,n) prime[i] = true;
    prime[1] = false;

    REP(i,2,(int)sqrt(n)) {
        if(prime[i]) {
            for(int j=0;i*(j+2)<=n-1;j++) {
                prime[i*(j+2)] = 0;
            }
        }
    }
}

int func(int x) {
    int ret = x;

    while(ret >= 10) {
        ret = 0;
        while(x != 0) {
            ret += x % 10;
            x /= 10;
        }

        x = ret;
    }

    return ret;
}

int main() {
    int k,n;
    cin >> k >> n;

    Eratosthenes(n+1);

    vector<int> v;
    REP(i,k,n+1) {
        if(prime[i]) v.push_back(i);
    }

    vector<int> res(v.size());
    rep(i,v.size()) {
        res[i] = func(v[i]);
    }

    int a = 0,b = 0;
    map<int,int> m;
    bool used[200005];
    memset(used,0,sizeof(used));

    rep(i,v.size()) {
        if(!used[res[i]]) {
            used[res[i]] = true;
            m[i-a] = max(m[i-a], v[a]);
        } else {
            while(used[res[i]]) {
                used[res[a]] = false;
                a++;
            }

            used[res[i]] = true;
            m[i-a] = max(m[i-a], v[a]);
        }
    }
    
    cout << m.rbegin()->second << endl;

    return 0;
}
