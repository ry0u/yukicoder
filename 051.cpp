#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main()
{
    ll w,d;
	cin >> w >> d;

	for(ll i=d;i>=2;i--)
	{
		w -= w/(i*i);
	}

	cout << w << endl;
	
	return 0;
}
