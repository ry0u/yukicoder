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
    string bf,af;
    ll n;

    cin >> bf >> n >> af;

    int a = 0,b = 0;
    rep(i,3) {
        if(bf[i] == 'o') b++;
        if(af[i] == 'o') a++;
    }

    if(a != b) {
        cout << "SUCCESS" << endl;
        return 0;
    }

    int cnt = 0;
    if(a == 3) {
        cout << "FAILURE" << endl;
    } else if(a == 2) {
        if(bf == af) {
            if(bf == "oxo") {
                if(n % 2 == 0 || n >= 3) cout << "FAILURE" << endl;
                else cout << "SUCCESS" << endl;
            } else {
                cout << "FAILURE" << endl;
            }
        }
        else {
            if((bf == "oox" && af == "oxo") || (bf == "oxo" && af == "oox")) {
                cnt = 1;
            }
            else if((bf == "oox" &&  af == "xoo") || (bf == "xoo" && af == "oox")) {
                cnt = 2;
            } else if((bf == "oxo" && af == "xoo") || (bf == "xoo" && af == "oxo")) {
                cnt = 1;
            }

            n -= cnt;
            if(n < 0) cout << "SUCCESS" << endl;
            else cout << "FAILURE" << endl;
        }

    } else {

        if(bf == af) {
            if(bf == "xox") {
                if(n % 2 == 0 || n >= 3) cout << "FAILURE" << endl;
                else cout << "SUCCESS" << endl;
            } else {
                cout << "FAILURE" << endl;
            }
        } else {
            rep(i,3) {
                rep(j,3) {
                    if(af[j] == 'o' && bf[i] == af[j]) {
                        cnt = abs(i-j);
                    }
                }
            }

            n -= cnt;
            if(n < 0) cout << "SUCCESS" << endl;
            else cout << "FAILURE" << endl;
        }
    }
    return 0;
}
