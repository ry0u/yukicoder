#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int l,k;
	cin >> l >> k;

	int ans = 0;
	while(l > k*2)
	{
		l -= k*2;
		ans += k;
	}

	cout << ans << endl;

	return 0;
}
