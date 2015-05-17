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
	int x,y,l;
	cin >> x >> y >> l;

	ll ans = 0;
	if(y > 0)
	{
		if(y%l == 0) ans += y/l;
		else ans += y/l + 1;
	}
	else if(y < 0)
	{
		y = -y;
		ans++;

		if(x == 0) ans++;

		if(y%l == 0) ans += y/l;
		else ans += y/l + 1;
	}

	if(x > 0)
	{
		ans++;
		if(x%l == 0) ans += x/l;
		else ans += x/l + 1;
	}
	else if(x < 0)
	{
		x = -x;
		ans++;

		if(x%l == 0) ans += x/l;
		else ans += x/l + 1;
	}

	cout << ans << endl;

	return 0;
}
