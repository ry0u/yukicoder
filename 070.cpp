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

	int ans = 0;
	rep(i,n)
	{
		int H,M,h,m;
		char c;

		cin >> H >> c >> M >> h >> c >> m;

		int T=0;
		if(M <= m)
		{
			while(H != h)
			{
				H++;
				T++;
				H %= 24;
			}
			
			T *= 60;
			T += m-M;
		}
		else
		{
			while(H != h)
			{
				H++;
				T++;
				H %= 24;
			}

			T--;
			T *= 60;
			T += (60-M) + m;
		}

		ans += T;
	}
	
	cout << ans << endl;
	
	return 0;
}
