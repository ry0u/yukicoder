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
	int n;
	cin >> n;
	
	vector<ll> v(n);
    ll lmax = 0;
	rep(i,n) 
	{
		int a,b;
		cin >> a >> b;

		v[i] = a + b*4;
		lmax = max(lmax,v[i]);
	}

	bool flag = true;
	rep(i,n)
	{
		if(lmax%2 == v[i]%2) continue;
		else
		{
			flag = false;
			break;
		}
	}

	if(!flag) cout << -1 << endl;
	else
	{
	    ll ans = 0;
		rep(i,n)
		{
		    ll d = lmax - v[i];
			ans += d/2;
		}

		cout << ans << endl;
	}

	return 0;
}
