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
    int n,m;
    cin >> m >> n;

    int t = __gcd(m,n);
    m /= t;
    n /= t;

    int cnt = 0;
    while(true) {
        if(n == 1 && m == 1) break;

        if(m > n) {
            m -= n;
        } else {
            swap(m,n);
        }

        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
