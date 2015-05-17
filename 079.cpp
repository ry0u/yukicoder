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

	int cnt[7];
	memset(cnt,0,sizeof(cnt));
	
	int res = 0;
	rep(i,n)
	{
		int x;
		cin >> x;
		cnt[x]++;

		res = max(res,cnt[x]);
	}

	for(int i=6;i>=1;i--)
	{
		if(res == cnt[i])
		{
			cout << i << endl;
			break;
		}
	}

	return 0;
}
