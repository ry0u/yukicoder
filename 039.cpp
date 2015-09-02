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

    int id = 0;
    while(true) {
        REP(i,id,s.size()) {
            if(s[i] == '9') continue;
            else {
                id = i;
                break;
            }
        }

        int idx = id;
        char c = s[id] + 1;
        REP(i,id+1,s.size()) {
            if(c <= s[i]) {
                c = s[i];
                idx = i;
            }
        }

        if(id != idx || id == s.size()-1) {
            swap(s[id],s[idx]);
            break;
        }

        id++;
    }
    cout << s << endl;

    return 0;
}
