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
		if('a' <= s[i] && s[i] <= 'z')
		{
			s[i] = 'A' + (s[i] - 'a');
		}
		else if('A' <= s[i] && s[i] <= 'Z')
		{
			s[i] = 'a' + (s[i] - 'A');
		}
	}

	cout << s << endl;
	return 0;
}
