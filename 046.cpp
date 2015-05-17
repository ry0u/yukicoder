#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	
	if(b%a == 0) cout << b/a << endl;
	else cout << b/a +1 << endl;
	return 0;
}
