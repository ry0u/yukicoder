#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	string s;
	cin >> s;

	vector<string> v(8);
	rep(i,8) cin >> v[i];

	int a=0,b=0;
	rep(i,8)
	{
		rep(j,8)
		{
			if(v[i][j] == 'b') a++;
			if(v[i][j] == 'w') b++;
		}
	}

	int res = max(a,b) - min(a,b);
	if(s == "yukiko")
	{
		if(res%2 == 0) cout << "yukiko" << endl;
		else cout << "oda" << endl;
	}
	else
	{
		if(res%2 == 0) cout << "oda" << endl;
		else cout << "yukiko" << endl;
	}

	return 0;
}
