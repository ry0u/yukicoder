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
    int n;
    cin >> n;

    rep(q,n) {
        string s;
        cin >> s;

        int r = 0, g = 0,w = 0;
        bool flag = true, R = false;
        for(int i=s.size()-1;i>=0;i--) {
            if(s[i] == 'R') {
                r++;
                R = true;
            }
            if(s[i] == 'G') {
                g++;

                if(r) r--;
                else flag = false;
            }
            if(s[i] == 'W') {
                w = min(g,w+1);

                if(!g) flag = false;
            }
        }

        if(!R) flag = false;
        if(w < g || r != 0) flag = false;

        if(flag) cout << "possible" << endl;
        else cout << "impossible" << endl;
    }

    return 0;
}
