#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

map<char,int> m;

int main()
{
	string a,b;
	cin >> a >> b;

	bool flag = true;
	rep(i,a.size()) m[a[i]]++;

	rep(i,b.size())
	{
		if(m[b[i]] >= 1) m[b[i]]--;
		else
		{
			flag = false;
			break;
		}
	}

	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	

	return 0;
}
