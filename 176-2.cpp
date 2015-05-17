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
	ll a,b,t;
	cin >> a >> b >> t;

	ll ans = (t + b - 1) / b*b;
	for(ll c=0; c*b <= t && c <= 2*c+1;c++)
	{
		ans = min(ans,c*b + (t -c*b + a -1)/a * a);
	}

	cout << ans << endl;

	return 0;
}
