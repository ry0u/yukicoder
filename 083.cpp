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
	
	string s = "";
	while(n >= 4)
	{
		s += "1";
		n -= 2;
	}

	if(n == 3) s = "7" + s;
	else s += "1";

	cout << s << endl;

	return 0;
}
