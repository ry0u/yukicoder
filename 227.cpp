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
    map<int,int> m;
    rep(i,5) {
        int a;
        cin >> a;

        m[a]++;
    }

    vector<int> v;
    map<int,int>::iterator ite;
    for(ite = m.begin(); ite != m.end(); ite++) {
        v.push_back(ite->second);
    }

    sort(v.begin(),v.end());

    if(v.size() == 2 && v[0] == 2 && v[1] == 3) {
        cout << "FULL HOUSE" << endl;
    } else if(v.size() == 3 && v[0] == 1 && v[1] == 1 && v[2] == 3) {
        cout << "THREE CARD" << endl;
    } else if(v.size() == 3 && v[0] == 1 && v[1] == 2 && v[2] == 2) {
        cout << "TWO PAIR" << endl;
    } else if(v.size() == 4 && v[0] == 1 && v[1] == 1 && v[2] == 1 && v[3] == 2) {
        cout << "ONE PAIR" << endl;
    } else cout << "NO HAND" << endl;


    return 0;
}
