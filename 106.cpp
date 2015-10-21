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
            for(int j=0;i*(j+2)<n;j++) {
                prime[i*(j+2)] = 0;
            }
        }
    }
}

int main() {
    int n,k;
    cin >> n >> k;

    Eratosthenes(n+5);
    int cnt[2000005];
    memset(cnt,0,sizeof(cnt));

    REP(i,2,n+1) {
        if(prime[i]) {
            for(int j=i; j <= n; j += i) {
                cnt[j]++;
            }
        }
    }

    int ans = 0;
    REP(i,2,n+1) {
        if(cnt[i] >= k) ans++;
    }

    cout << ans << endl;

    return 0;
}
