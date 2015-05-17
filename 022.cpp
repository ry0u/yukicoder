#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int cnt[10005];

int main()
{
	int n,k;
	cin >> n >> k;

	string s;
	cin >> s;

	memset(cnt,0,sizeof(cnt));

	rep(i,s.size())
	{
		if(s[i] == '(') cnt[i]++;
		else cnt[i+1]--;
	}

	REP(i,1,s.size()+1) cnt[i] += cnt[i-1];

	if(s[k-1] == '(')
	{
		REP(i,k,s.size())
		{
			if(cnt[k-1] == cnt[i])
			{
				cout << i+1 << endl;
				break;
			}
		}
	}
	else
	{
		for(int i=k-2;i>=0;i--)
		{
			if(cnt[k-1] == cnt[i])
			{
				cout << i+1 << endl;
				break;
			}
		}
	}

	return 0;
}
