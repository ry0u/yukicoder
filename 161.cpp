#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int G,C,P;
	cin >> G >> C >> P;

	string s;
	cin >> s;
	
	int ans = 0,g=0,c=0,p=0;
	rep(i,s.size())
	{
		if(s[i] == 'G') g++;
		if(s[i] == 'C') c++;
		if(s[i] == 'P') p++;
	}

	while(G && c)
	{
		c--;
		G--;
	}

	while(C && p)
	{
		p--;
		C--;
	}

	while(P && g)
	{
		g--;
		P--;
	}
		
	return 0;
}
