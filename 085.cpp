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
    int n,m,c;
    cin >> n >> m >> c;

    if(n > m) swap(n,m);

    if(n == 1 && m == 2) cout << "YES" << endl;
    else if(n == 1 || m == 1) cout << "NO" << endl;
    else if(n % 2 == 1 && m % 2 == 1) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
