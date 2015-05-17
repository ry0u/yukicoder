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
	string s;
	cin >> s;

	ll ans = 0;
	rep(i,s.size())
	{
		if(s[i] == 'L') ans = ans*2 + 1;
		else ans = ans*2 + 2;
	}

	cout << ans+1 << endl;
	
	return 0;
}
