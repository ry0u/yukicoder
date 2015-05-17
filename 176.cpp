#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30

using namespace std;
typedef long long ll;

ll a,b,t,ans = INF;
map<ll,bool> memo;

void dfs(ll x)
{
	if(memo[x]) return;
	if(x > ans) return;
	if(x >= t)
	{
		ans = min(ans,x);
		return;
	}

	memo[x] = true;
	dfs(x+a);
	dfs(x+b);
}

int main()
{
	cin >> a >> b >> t;

	dfs(0);
	cout << ans << endl;
	return 0;
}
