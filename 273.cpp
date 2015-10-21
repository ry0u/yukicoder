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

string s;

bool ch(int i,int j) {
    REP(k,i,(i+j)/2+1) {
        if(s[k] != s[j-(k-i)]) return false;
    }

    return true;
}

int main() {
    cin >> s;

    vector<int> id[s.size()];

    rep(i,s.size()) {
        REP(j,i,s.size()) {
            if(i == 0 && j == s.size()-1) continue;

            if(ch(i,j)) {
                id[i].push_back(j);
            } 
        }
    }

    int ans = 0;
    rep(i,s.size()) {
        rep(j,id[i].size()) {
            ans = max(ans,id[i][j] - i + 1);
        }
    }

    cout << ans << endl;

    return 0;
}
