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

	int sum = 0;
	vector<int> v(n);
	rep(i,n)
	{
		cin >> v[i];
		sum += v[i];
	}

	sum /= n-1;
	int a=0,b=0;
	rep(i,n+1)
	{
		if(i*4 + (n-i)*2 == sum)
		{
			a = i;
			b = n-i;
		}
	}
	
	cout << b << " " << a << endl;
	
	return 0;
}
