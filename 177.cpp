#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30

using namespace std;

struct edge
{
	int to,cap,rev;

	edge(int t,int c,int r)
	{
		to = t;
		cap = c;
		rev = r;
	}
};

vector<edge> G[105];
bool used[105];

void add_edge(int from,int to,int cap)
{
	G[from].push_back(edge(to,cap,G[to].size()));
	G[to].push_back(edge(from,0,G[from].size()-1));
}

int dfs(int v,int t,int f)
{
	if(v == t) return f;
	used[v] = true;

	rep(i,G[v].size())
	{
		edge &e = G[v][i];
		if(!used[e.to] && e.cap > 0)
		{
			int d = dfs(e.to,t,min(f,e.cap));
			if(d > 0)                                           
			{
				e.cap -= d;   
				G[e.to][e.rev].cap += d; 
				return d;
			}
		}
	}
	return 0;
}

int max_flow(int s,int t)
{
	int flow = 0;
	for(;;)
	{
		memset(used,0,sizeof(used));
		int f = dfs(s,t,INF);
		if(f == 0) return flow;
		flow += f;
	}
}

// s:0 n m t:n+m+1
int main()
{
	int w;
	cin >> w;

	int n;
	cin >> n;

	vector<int> J(n);
	rep(i,n) 
	{
		cin >> J[i];
		add_edge(0,i+1,J[i]);
	}


	int m;
	cin >> m;

	vector<int> C(m);
	rep(i,m) 
	{
		cin >> C[i];
		add_edge(n+i+1,n+m+1,C[i]);
	}

	bool can[105][105];
	memset(can,1,sizeof(can));

	rep(i,m)
	{
		int q;
		cin >> q;

		rep(j,q)
		{
			int x;
			cin >> x;

			can[x][n+i+1] = false;
		}
	}
		
	rep(i,n)
	{
		rep(j,m)
		{
			if(can[i+1][n+j+1]) add_edge(i+1,n+j+1,INF);
		}
	}
	
	if(max_flow(0,n+m+1) >= w) cout << "SHIROBAKO" << endl;
	else cout << "BANSAKUTSUKITA" << endl;
	
	return 0;
}
