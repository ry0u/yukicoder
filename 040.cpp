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
	rep(i,n) cin >> v[n-i-1];

	rep(i,v.size()-3)
	{
		v[i+2] += v[i];
		v[i] = 0;
	}

	
	
		return 0;
}
