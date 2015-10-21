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
    int d;
    cin >> d;

    if(d < 4) cout << 0 << endl;
    else {
        d -= d % 2;
        d /= 2;

        int a,b;
        if(d % 2 == 0) {
            a = d/2;
            b = d/2;
        } else {
            a = (d-1)/2;
            b = (d+1)/2;
        }

        cout << a*b << endl;
    }

    return 0;
}
