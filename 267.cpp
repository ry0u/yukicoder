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

int func(char c) {
    if('2' <= c && c <= '9') {
        return c - '0';
    } else if(c == 'A') {
        return 1;
    } else if(c == 'T') {
        return 10;
    } else if(c == 'J') {
        return 11;
    } else if(c == 'Q') {
        return 12;
    } else if(c == 'K') {
        return 13;
    }
}

string func2(int d) {
    if(2 <= d && d <= 9) {
        stringstream ss;
        ss << d;
        return ss.str();
    } else if(d == 1) {
        return "A";
    } else if(d == 10) {
        return "T";
    } else if(d == 11) {
        return "J";
    } else if(d == 12) {
        return "Q";
    } else if(d == 13) {
        return "K";
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> d,c,h,s;
    rep(i,n) {
        string t;
        cin >> t;

        if(t[0] == 'D') {
            d.push_back(func(t[1]));
        } else if(t[0] == 'C') {
            c.push_back(func(t[1]));
        } else if(t[0] == 'H') {
            h.push_back(func(t[1]));
        } else if(t[0] == 'S') {
            s.push_back(func(t[1]));
        }
    }

    sort(d.begin(),d.end());
    sort(c.begin(),c.end());
    sort(h.begin(),h.end());
    sort(s.begin(),s.end());

    vector<string> v;
    rep(i,d.size()) v.push_back("D" + func2(d[i]));
    rep(i,c.size()) v.push_back("C" + func2(c[i]));
    rep(i,h.size()) v.push_back("H" + func2(h[i]));
    rep(i,s.size()) v.push_back("S" + func2(s[i]));

    rep(i,v.size()) {
        cout << v[i];

        if(i == v.size()-1) cout << endl;
        else cout << " ";
    }

    return 0;
}
