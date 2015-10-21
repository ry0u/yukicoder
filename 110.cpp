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
    int na,nb;

    cin >> na;
    vector<int> va(na);
    rep(i,na) cin >> va[i];

    cin >> nb;
    vector<int> vb(nb);
    rep(i,nb) cin >> vb[i];

    sort(va.rbegin(),va.rend());
    sort(vb.rbegin(),vb.rend());

    int ans = 0;
    int ai = 0, bi = 0,top = INF,h = 0;
    while(true) {
        if(h % 2 == 0 && ai == na) break;
        if(h % 2 == 1 && bi == nb) break;

        if(h % 2 == 0) {
            while(top <= va[ai] && ai < na) {
                ai++;
            }

            if(ai == na) break;
            if(top > va[ai]) {
                top = va[ai];
                ai++;
                h++;
                continue;
            }
        }
        
        if(h % 2 == 1) {
            while(top <= vb[bi] && bi < nb) {
                bi++;
            }

            if(bi == nb) break;
            if(top > vb[bi]) {
                top = vb[bi];
                bi++;
                h++;
                continue;
            }
        }

        break;
    }
    ans = max(ans,h);

    ai = 0, bi = 0,top = INF,h = 0;
    while(true) {
        if(h % 2 == 1 && ai == na) break;
        if(h % 2 == 0 && bi == nb) break;

        if(h % 2 == 1) {
            while(top <= va[ai] && ai < na) {
                ai++;
            }

            if(ai == na) break;
            if(top > va[ai]) {
                top = va[ai];
                ai++;
                h++;
                continue;
            }
        }
        
        if(h % 2 == 0) {
            while(top <= vb[bi] && bi < nb) {
                bi++;
            }

            if(bi == nb) break;
            if(top > vb[bi]) {
                top = vb[bi];
                bi++;
                h++;
                continue;
            }
        }

        break;
    }
    ans = max(ans,h);

    cout << ans << endl;


    return 0;
}
