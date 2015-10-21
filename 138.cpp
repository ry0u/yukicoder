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

vector<string> split(const string &str, char delim) {
    vector<string> res;
    size_t current = 0, found;
    while((found = str.find_first_of(delim, current)) != string::npos) {
        res.push_back(string(str, current, found - current));
        current = found + 1;
    }
    res.push_back(string(str, current, str.size() - current));
    return res;
}

int main() {
    string s,t;
    cin >> s >> t;

    vector<string> v = split(s,'.');
    vector<string> v2 = split(t,'.');

    stringstream ss;
    rep(i,v.size()) {
        string ret = v[i];
        REP(j,v[i].size(),3) {
            ret = "0" + ret;
        }

        ss << ret;
    }

    stringstream ss2;
    rep(i,v2.size()) {
        string ret = v2[i];
        REP(j,v2[i].size(),3) {
            ret = "0" + ret;
        }

        ss2 << ret;
    }

    if(ss.str() >= ss2.str()) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

    return 0;
}
