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
	int l,n;
	cin >> l >> n;

	vector<string> v(n);
	rep(i,n) cin >> v[i];

	ll ans = 0;
	rep(i,n)
	{
		int t = l - v[i].size();

		ll res = 1;
		rep(j,t) res *= 2;

		ans += res;
	}

	cout << ans << endl;
	
	return 0;
}
