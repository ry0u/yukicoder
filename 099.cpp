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
	
	int a=0,b=0;
	vector<int> v(n);
	rep(i,n) 
	{
		cin >> v[i];

		if(v[i]%2 == 0) a++;
		else b++;
	}

	int ans = max(a,b) - min(a,b);
	cout << ans << endl;

	return 0;
}
