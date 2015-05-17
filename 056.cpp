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
	int d,p;
	cin >> d >> p;
	
    int ans = d*(100+p);
	ans /= 100;
	
	cout << ans << endl;

	return 0;
}
