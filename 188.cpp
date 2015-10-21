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

int days[2][13] = {	{0,31,28,31,30,31,30,31,31,30,31,30,31},
                    {0,31,29,31,30,31,30,31,31,30,31,30,31} };

int main() {
    int ans = 0;

    REP(i,1,13) {
        REP(j,1,days[0][i]+1) {
            int sum = 0,d = j;

            while(true) {
                sum += d % 10;

                d /= 10;
                if(d == 0) break;
            }

            if(sum == i) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
