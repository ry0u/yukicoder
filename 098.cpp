#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	double x,y;
	cin >> x >> y;

	int ans = (int)(sqrt(x*x+y*y)*2);
	cout << ans+1 << endl;

	return 0;
}
