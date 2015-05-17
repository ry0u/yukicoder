#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define PI acos(-1)

using namespace std;

int main()
{
	double c,a,b;
	cin >> c >> a >> b;
	
	double r = (b-a)/2;
	double l = a + r;

	cout << fixed;
	cout.precision(20);
	cout <<  r*r*PI  * l*2*PI * c << endl;

	return 0;
}
