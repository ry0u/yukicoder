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

    sort(s.rbegin(),s.rend());


    // int id = 0;
    // rep(i,s.size()) {
    //     if(s[i] == '9') continue;
    //
    //     id = i;
    //     break;
    // }
    //
    // while(true) {
    //     if(id == s.size()-1) break;
    //
    //     char c = s[id+1],idx = id+1;
    //     REP(i,id+1,s.size()) {
    //         if(c <= s[i]) {
    //             c = s[i];
    //             idx = i;
    //         }
    //     }
    //
    //     if(s[id] >= c) {
    //         id++;
    //         continue;
    //     } else {
    //         swap(s[id],s[idx]);
    //     }
    // }

    cout << s << endl;

    return 0;
}
