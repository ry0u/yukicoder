#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v(n);
	rep(i,n) cin >> v[i];

	int ans = 0;
	rep(i,n-2)
	{
		if(v[i] < v[i+1] && v[i] > v[i+2]) ans++;
		if(v[i] > v[i+1] && v[i] < v[i+2]) ans++;
		if(v[i+2] < v[i+1] && v[i+2] > v[i]) ans++;
		if(v[i+2] > v[i+1] && v[i+2] < v[i]) ans++;
	}

	cout << ans << endl;
	
	return 0;
}
