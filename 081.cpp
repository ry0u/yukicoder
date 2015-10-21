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

string stringplus(string a,string b) {
    string ret;
    if(a.size() < b.size()) swap(a,b);

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    int carry = 0;
    rep(i,b.size()) {
        int x = a[i] - '0';
        int y = b[i] - '0';
        int z = x + y + carry;

        carry = z / 10;
        ret.push_back('0' + (z%10));
    }

    REP(i,b.size(),a.size()) {
        int x = a[i] - '0';
        int z = x + carry;

        carry = z / 10;
        ret.push_back('0' + (z%10));
    }

    if(carry) ret.push_back('0' + carry);
    reverse(ret.begin(),ret.end());
    return ret;
}

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
    int n;
    cin >> n;

    ll a = 0, b = 0;
    rep(i,n) {
        string s;
        cin >> s;

        vector<string> ret = split(s,'.');
        ll t;
        stringstream ss;
        ss << ret[0];
        ss >> t;

        a += t;

        if(ret.size() == 2) {
            int size = ret[1].size();
            rep(i,10-size) {
                ret[1] += "0";
            }

            ll t2;
            stringstream ss2;
            ss2 << ret[1];
            ss2 >> t2;

            if(ret[0][0] == '-') {
                b -= t2;
            } else {
                b += t2;
            }
        }
    }

    a += b/10000000000;
    b %= 10000000000;

    if(a < 0 && b > 0) {
        a++;
        b -= 10000000000;
    }

    if(a > 0 && b < 0) {
        a--;
        b += 10000000000;
    }

    b = abs(b);

    cout << a << ".";
    stringstream res;
    res << b;
    string ans = res.str();
    int size = ans.size();
    rep(i,10-size) ans = "0" + ans;
    cout << ans << endl;

    return 0;
}
