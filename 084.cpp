#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main()
{
	ll r,c;
	cin >> r >> c;

	ll t,t2;
	if(r == c)
	{
	}
	else
	{
		t = c;
		
		if(r%2 == 0) t2 = r/2;
		else t2 = r/2 + 1;

		cout << t*t2-1 << endl;
	}
	return 0;
}
