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
    int l = 0,r = 1000000000;

    while(r-l > 1) {
        int mid = (l+r)/2;

        cout << "? " << mid << endl;

        int res;
        cin >> res;

        if(res == 1) {
            l = mid;
        }else {
            r = mid;
        }
    }

    cout << "! " << l << endl;

    return 0;
}
