#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main()
{
	ll f,f1,n;
	cin >> f >> f1 >> n;

	ll ans[3] = {f,f1,f^f1};

	cout << ans[n%3] << endl;
	return 0;
}
