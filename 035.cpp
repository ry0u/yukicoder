#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int a=0,b=0;
	rep(i,n)
	{
		int t;
		string s;
		cin >> t >> s;

		int m = (int)((12*t)/1000.0);
		if(s.size() <= m) a += s.size();
		else
		{
			a += m;
			b += s.size()-m;
		}
	}

	cout << a << " " << b << endl;
	return 0;
}
