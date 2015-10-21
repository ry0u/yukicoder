#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <stack>

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
    string s;
    cin >> s;

    int ans = -INF;
    rep(i,s.size()) {
        rotate(s.begin(),s.begin()+1,s.end());

        if(s[0] == '+' || s[0] == '-' || s[s.size()-1] == '+' || s[s.size()-1] == '-') {
            continue;
        }

        vector<string> v;
        stringstream ss;
        rep(i,s.size()) {
            if(s[i] == '+') {
                v.push_back(ss.str());
                v.push_back("+");
                ss.str("");
                ss.clear(stringstream::goodbit);
            } else if(s[i] == '-') {
                v.push_back(ss.str());
                v.push_back("-");
                ss.str("");
                ss.clear(stringstream::goodbit);
            } else {
                ss << s[i];
            }
        }

        v.push_back(ss.str());

        int res = 0;
        bool p = true;
        rep(i,v.size()) {
            if(v[i] == "+") {
                p = true;
            } else if(v[i] == "-") {
                p = false;
            } else {
                int t;
                stringstream ss;
                ss << v[i];
                ss >> t;

                if(p) res += t;
                else res -= t;
            }
        }

        ans = max(ans,res);
    }

    cout << ans << endl;

    return 0;
}
