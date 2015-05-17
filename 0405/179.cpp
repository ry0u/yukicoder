#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int h,w;
vector<string> s(55);

int main()
{
	cin >> h >> w;
	rep(i,h) cin >> s[i];

	int cnt = 0;
	rep(i,h)
	{
		rep(j,w)
		{
			if(s[i][j] == '#') cnt++;
		}
	}

	if(cnt%2 == 0) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
