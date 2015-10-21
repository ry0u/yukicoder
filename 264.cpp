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
    int n,k;
    cin >> n >> k;

    if(n == k) {
        cout << "Drew" << endl;
    } else if((n == 0 && k == 1) || (n == 1 && k == 2) || (n == 2 && k == 0)) {
        cout << "Won" << endl;
    } else {
        cout << "Lost" << endl;
    }

    return 0;
}
