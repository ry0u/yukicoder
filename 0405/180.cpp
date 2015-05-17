#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30

using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;

	vector<ll> A(n),B(n);
	ll vmax = 0,max_i = 0,vmin = INF,min_i = 0;
	rep(i,n)
	{
		cin >> A[i] >> B[i];
		
		if(vmax < A[i] + B[i])
		{
			vmax = A[i] + B[i];
			max_i = i;
		}
		else if(vmax == A[i] + B[i])
		{
			if(B[max_i] < B[i])
			{
				vmax = A[i] + B[i];
				max_i = i;
			}
		}

		if(vmin > A[i] + B[i])
		{
			vmin = A[i] + B[i];
			min_i = i;
		}
		else if(vmin == A[i] + B[i])
		{
			if(B[min_i] > B[i])
			{
				vmin = A[i] + B[i];
				min_i = i;
			}
		}
	}

	ll x = 1;
	ll res = vmax - vmin;
	while(true)
	{
		vmax += B[max_i];
		vmin += B[min_i];

		if(vmax < vmin)
		{
			swap(vmax,vmin);
			swap(max_i,min_i);
		}

		if(vmax - vmin < res)
		{	
			res = vmax - vmin;
			x++;

		}
		else break;
	}

	cout << x << endl;

	
		return 0;
}
