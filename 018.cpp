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

	rep(i,s.size())
	{
		int j = s[i] - 'A';

		j -= (i+1)%26;
		if(j < 0) j = 26 + j;

		s[i] = 'A' + j;
	}

	cout << s << endl;

	return 0;
}
