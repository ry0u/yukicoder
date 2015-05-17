#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt[10];
	memset(cnt,0,sizeof(cnt));

	int ans = 0;
	rep(i,n)
	{
		int a,b,c;
		cin >> a >> b >> c;

		a--;
		b--;
		c--;

		if(cnt[a] >= 1)
		{
			ans++;
			cnt[a] = 0;
		}
		else cnt[a]++;

		if(cnt[b] >= 1)
		{
			ans++;
			cnt[b] = 0;
		}
		else cnt[b]++;

		if(cnt[c] >= 1)
		{
			ans++;
			cnt[c] = 0;
		}
		else cnt[c]++;
		
	}

	int t = 0;
	rep(i,10) t += cnt[i];

	cout << ans + t/4 << endl;
	
		return 0;
}
