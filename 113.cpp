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
	string s;
	cin >> s;

	int x = 0,y = 0;
	rep(i,s.size())
	{
		if(s[i] == 'N') y++;
		if(s[i] == 'E') x++;
		if(s[i] == 'W') x--;
		if(s[i] == 'S') y--;
	}
	
	cout << fixed;
	cout.precision(10);
	cout << sqrt(x*x + y*y) << endl;

	return 0;
}
