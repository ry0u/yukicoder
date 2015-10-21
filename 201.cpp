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
    string sa,sb,pa,pb,xa,xb;
    cin >> sa >> pa >> xa;
    cin >> sb >> pb >> xb;

    if(pa.size() == pb.size()) {
        if(pa == pb) cout << -1 << endl;
        else if(pa > pb) cout << sa << endl;
        else cout << sb << endl;
    } else if(pa.size() > pb.size()) {
        cout << sa << endl;
    } else if(pa.size() < pb.size()) {
        cout << sb << endl;
    }


    return 0;
}
