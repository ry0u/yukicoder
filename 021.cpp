#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30

using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;

	vector<int> v(n);
	rep(i,n) cin >> v[i];
	
	int a = 0,b = INF;
	rep(i,n)
	{
		a = max(a,v[i]);
		b = min(b,v[i]);
	}

	cout << a-b << endl;
	
	return 0;
}
