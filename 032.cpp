#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int l,m,n;
	cin >> l >> m >> n;

	m += n/25;
	l += m/4;

	cout << n%25 + m%4 + l%10 << endl;
	
	return 0;
}
