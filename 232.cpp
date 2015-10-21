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
    int t,a,b;
    cin >> t >> a >> b;

    int res = min(a,b) + (max(a,b) - min(a,b));
    if(res > t || (t - res == 1 && a == 0 && b == 0)) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;

        t -= res;

        if(t == 1) {
            if(a > b) {
                rep(i,b) {
                    cout << ">^" << endl;
                }

                rep(i,a-b-1) {
                    cout << "^" << endl;
                }

                cout << ">" << endl;
                cout << "^<" << endl;
            } else if(a < b) {
                rep(i,a) {
                    cout << ">^" << endl;
                }

                rep(i,b-a-1) {
                    cout << ">" << endl;
                }

                cout << "^" << endl;
                cout << ">v" << endl;
            } else {
                rep(i,a-1) {
                    cout << ">^" << endl;
                }

                cout << ">" << endl;
                cout << "^" << endl;
            }
        } else {
            rep(i,min(a,b)) {
                cout << ">^" << endl;
            }

            if(a > b) {
                rep(i,max(a,b) - min(a,b)) {
                    cout << "^" << endl;
                }
            } else {
                rep(i,max(a,b) - min(a,b)) {
                    cout << ">" << endl;
                }
            }

            while(t) {
                if(t == 3) {
                    cout << ">^" << endl;
                    cout << "<" << endl;
                    cout << "v" << endl;
                    t -= 3;
                } else {
                    cout << ">" << endl;
                    cout << "<" << endl;
                    t -= 2;
                }
            }
        }
    }
    return 0;
}
