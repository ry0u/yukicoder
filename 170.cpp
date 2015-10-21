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

set<string> st;
void dfs(string s) {
    if(st.find(s) == st.end()) {
        st.insert(s);
        rep(i,s.size()-1) {
            swap(s[i],s[i+1]);
            dfs(s);
            swap(s[i],s[i+1]);
        }
    }
}

int main() {
    string s;
    cin >> s;

    dfs(s);

    cout << st.size() - 1 << endl;

    return 0;
}
