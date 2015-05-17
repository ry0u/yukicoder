#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int p;
	cin >> p;

	rep(i,p)
	{
		int n,k;
		cin >> n >> k;
		
		if((n-1)%(k+1) == 0) cout << "Lose" << endl;
		else cout << "Win" << endl;
	}

	return 0;
}
