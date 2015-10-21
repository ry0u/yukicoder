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

    string s,t;
    cin >> s >> t;
    s += t;

    int ans = 0;
    rep(i,s.size()) {
        int cnt = 0;
        bool flag = true, left = false, right = false;
        int d = n;

        REP(j,i,s.size()) {
            if(s[j] == 'o') {
                cnt++;
            } else {
                if(flag && d > 0) {
                    flag = false;
                    d--;
                    cnt++;
                    while(d > 0&& j+1 < s.size() && s[j+1] == 'x') {
                        d--;
                        cnt++;
                        j++;
                    }
                } else {
                    break;
                }
            }

            if(j == s.size()-1) right = true;
        }

        ans = max(ans,cnt);
    }

    int cnt = n;
    rep(i,s.size()) {
        if(s[i] == 'o') cnt++;
        else break;
    }

    ans = max(ans,cnt);

    cnt = n;
    for(int i=s.size()-1;i>=0;i--) {
        if(s[i] == 'o') cnt++;
        else break;
    }

    ans = max(ans,cnt);

    cout << ans << endl;

    return 0;
}
