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
	int x,y,r;
	cin >> x >> y >> r;

	double t = r*sqrt(2);
	cout << int(t) + abs(x) + abs(y) + 1 << endl;

	return 0;
}
