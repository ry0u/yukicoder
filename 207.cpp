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
    ll a,b;
    cin >> a >> b;

    REP(i,a,b+1) {
        stringstream ss;
        ss << i;

        string s = ss.str();
        if(find(s.begin(),s.end(),'3') != s.end() || i%3 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
