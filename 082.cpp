#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int w,h;
	char c;

	cin >> w >> h >> c;

	if(c == 'B')
	{
		rep(i,h)
		{
			rep(j,w)
			{
				if(i%2 == 0)
				{
					if(j%2 == 0) cout << "B";
					else cout << "W";
				}
				else
				{
					if(j%2 == 0) cout << "W";
					else cout << "B";
				}
			}
			cout << endl;
		}
	}
	else
	{
		rep(i,h)
		{
			rep(j,w)
			{
				if(i%2 == 0)
				{
					if(j%2 == 0) cout << "W";
					else cout << "B";
				}
				else
				{
					if(j%2 == 0) cout << "B";
					else cout << "W";
				}
			}
			cout << endl;
		}
	}
	return 0;
}
