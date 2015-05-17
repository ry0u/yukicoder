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

	vector<ll> v(n);
	rep(i,n) cin >> v[i];
	sort(v.begin(),v.end());

	REP(i,1,n) v[i] += v[i-1];

	int ans = 0;
	rep(i,n)
	{
		if(v[i] <= l) ans = i;
	}

	cout << ans+1 << endl;
	
	return 0;
}
