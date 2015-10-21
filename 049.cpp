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

int stringtoi(string s) {
    stringstream ss;
    int ret;

    ss << s;
    ss >> ret;
    return ret;
}

int main() {
    string s;
    cin >> s;

    vector<string> v;
    stringstream ss;
    rep(i,s.size()) {
        if(s[i] == '*') {
            v.push_back(ss.str());
            v.push_back("*");

            ss.str("");
            ss.clear(stringstream::goodbit);
        }
        else if(s[i] == '+') {
            v.push_back(ss.str());
            v.push_back("+");

            ss.str("");
            ss.clear(stringstream::goodbit);
        } else {
            ss << s[i];

            if(i == s.size()-1) {
                v.push_back(ss.str());
            }
        }
    }

    stack<int> st;

    rep(i,v.size()) {
        if(v[i] == "*") {
            int a = st.top();
            st.pop();
            int b = stringtoi(v[i+1]);

            st.push(a+b);
            i++;
        }
        else if(v[i] == "+") {
            int a = st.top();
            st.pop();
            int b = stringtoi(v[i+1]);

            st.push(a*b);
            i++;
        } else {
            st.push(stringtoi(v[i]));
        }
    }

    cout << st.top() << endl;

    return 0;
}
