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

int main() {
    string s,t;
    cin >> s >> t;

    int a = s[s.size()-1] - '0';

    stringstream ss;
    if(t.size() == 1) {
        ss << t[0];
    } else {
        ss << t[t.size()-2];
        ss << t[t.size()-1];
    } 

    int tmp;
    ss >> tmp;
    int b = tmp % 4;

    if(b == 0 && t != "0") b = 4;

    int res = pow(a,b);
    res %= 10;

    cout << res << endl;

    return 0;
}
