#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30

using namespace std;

int cnt[105],cnt2[105];

int main()
{
	int n;
	cin >> n;
	
	vector<int> v(n);
	map<int,int> m;

	memset(cnt,0,sizeof(cnt));
	memset(cnt2,0,sizeof(cnt));
	int vmax = 0,vmin = INF;

	rep(i,n)
	{
		cin >> v[i];
		cnt[v[i]+1]++;
		cnt2[v[i]]++;

		vmax = max(vmax,v[i]);
		vmin = min(vmin,v[i]);
		m[v[i]]++;
	}
		
	map<int,int>::iterator ite;
	for(ite = m.begin();ite != m.end();ite++)
	{
		cout << cnt[ite->first] << " ";
	}
	cout << endl;


	ite = m.begin();
	int pre = ite->first;
	ite++;

	for(;ite != m.end();ite++)
	{
		int now = ite->first;
		cout << "pre:" << pre << " now:" << now << endl;
		cnt[now] += cnt[pre];
		pre = now;
	}

	for(ite = m.begin();ite != m.end();ite++) cout << ite->first << " ";
	cout << endl;

	cout << "---------------" << endl;

	for(ite = m.begin();ite != m.end();ite++)
	{
		int d = ite->first;
		cout << cnt[d] << " ";
	}
	cout << endl;

	for(ite = m.begin();ite != m.end();ite++)
	{
		int d = ite->first;
		cout << cnt2[d] << " ";
	}
	cout << endl;
	return 0;
}
