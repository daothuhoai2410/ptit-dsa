#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int d,c,x,u,v;
		cin >> d >> c >> x;
		vector<bool> check(c+1,1);
		vector<vector<int>> a(d+1);
		stack<int> s;
		for(int i=1; i<=c; i++)
		{
			cin >> u >> v;
			a[u].push_back(v);
		}
		for(int i=1;i<=d;i++)
		{
			sort(a[i].begin(),a[i].end());
		}
		s.push(x);
		cout << x << " ";
		check[x] = 0;
		while(!s.empty())
		{
			x = s.top();
			s.pop();
			for(int i=0;i<a[x].size();i++)
			{
				v = a[x][i];
				if(check[v] == 1)
				{
					cout << v << " ";
					check[v] = 0;
					s.push(x);
					s.push(v);
					break;
				}
			}
		}
		cout << endl;
	}
}
