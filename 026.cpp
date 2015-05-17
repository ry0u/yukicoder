#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int a[3];
	rep(i,3) a[i] = 0;

	int n,m;
	cin >> n >> m;

	a[n-1]++;
	rep(i,m)
	{
		int p,q;
		cin >> p >> q;
		swap(a[p-1],a[q-1]);
	}

	rep(i,3)
	{
		if(a[i] == 1) cout << i+1 << endl;
	}
	return 0;
}
