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

    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    double cnt = 0,q = 0;
    do {
        do {
            q++;
            int ca = 0;
            rep(i,n) {
                if(a[i] > b[i]) ca++;
            }

            if(ca > n/2) cnt++;

        }while(next_permutation(b.begin(),b.end()));
    } while(next_permutation(a.begin(),a.end()));

    cout << cnt / q << endl;

    return 0;
}
