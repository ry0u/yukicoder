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

string S;
set<string> st;

void dfs(string s,string ret) {
    if(ret.size() == S.size()) {
        st.insert(ret);
        return;
    }

    dfs(s.substr(0,s.size()-1),ret + s.substr(s.size()-1,1));
    dfs(s.substr(1,s.size()-1),ret + s.substr(0,1));
}

int main() {
    cin >> S;

    dfs(S,"");

    cout << st.size() << endl;
    return 0;
}
