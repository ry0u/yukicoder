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
    string s;
    cin >> s;

    vector<string> v;
    stringstream ss;
    rep(i,s.size()) {
        if(s[i] == '-') {
            string t = ss.str();
            if(t.size() > 0) v.push_back(t);
            v.push_back("-");

            ss.str("");
            ss.clear(stringstream::goodbit);
        } else if(s[i] == '+') {
            string t = ss.str();
            if(t.size() > 0) v.push_back(t);
            v.push_back("+");

            ss.str("");
            ss.clear(stringstream::goodbit);
        } else {
            ss << s[i];
        }
    }

    v.push_back(ss.str());
    ss.str("");
    ss.clear(stringstream::goodbit);

    if(v[0] == "-" || v[0] == "+") {
        vector<string> t;
        t.push_back(v[0] + v[1]);
        REP(i,2,v.size()) t.push_back(v[i]);

        v.clear();
        copy(t.begin(),t.end(),back_inserter(v));
    }

    if(v.size() == 3) {
        int ans = 0;
        ss << v[0];
        ss >> ans;

        ss.str("");
        ss.clear(stringstream::goodbit);

        if(v[1] == "+") {
            int t;
            ss << "-" + v[2];
            ss >> t;

            ans += t;
        } else {
            int t;
            ss << "+" + v[2];
            ss >> t;

            ans += t;
        }

        cout << ans << endl;
    } else {
        int ans = 0;
        ss << v[0];
        ss >> ans;

        ss.str("");
        ss.clear(stringstream::goodbit);

        if(v[1] == "+" && v[2] == "+") {
            int t;
            ss << "-" + v[3];
            ss >> t;

            ans += t;
        } else if(v[1] == "+" && v[2] == "-") {
            int t;
            ss << "+" + v[3];
            ss >> t;

            ans += t;
        } else if(v[1] == "-" && v[2] == "+") {
            int t;
            ss << "+" + v[3];
            ss >> t;

            ans += t;
        } else if(v[1] == "-" && v[2] == "-") {
            int t;
            ss << "-" + v[3];
            ss >> t;

            ans += t;
        }

        cout << ans << endl;
    }

    return 0;
}
