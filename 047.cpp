#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int n;
	cin >> n;

	bitset<30> bit(n);
	int msb = 0;
	rep(i,30)
	{
		if(bit[i]) msb = i;
	}

	if(n - pow(2.0,msb) == 0) cout << msb << endl;
	else cout << msb+1 << endl;

	
	return 0;
}
