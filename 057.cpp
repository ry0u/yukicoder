#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int a = 3;
	double b = 0.5;

	int n;
	cin >> n;

	if(n%2 == 0)
	{
		cout << a*n + n/2 << endl;
	}
	else
	{
		cout << a*n + n/2 << "." << 5 << endl;
	}
	return 0;
}
