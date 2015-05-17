#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt[10];
	memset(cnt,0,sizeof(cnt));

	rep(i,n)
	{
		vector<int> v(4);
		rep(j,4) cin >> v[j];

		string s;
		cin >> s;

		if(s == "YES")
		{
			rep(j,4) cnt[v[j]]++;
		}
		else
		{
			rep(j,4) cnt[v[j]]--;
		}
	}

	int ans=0,ret=-INF;
	rep(i,10)
	{
		if(ret < cnt[i])
		{
			ans = i;
			ret = cnt[i];
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
