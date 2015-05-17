#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

ll f(ll x)
{
	if(x == 1) return 1;
	return x + f(x-1);
}

int main()
{
	int l;
	cin >> l;
	
	ll ans = 0;

	ans += f(l/2+1) - (l/2+1);
	ans += f(l/2) - (l/2);
	
	cout << ans << endl;

	return 0;
}
