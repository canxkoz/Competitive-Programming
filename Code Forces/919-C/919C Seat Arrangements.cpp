#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{

int n,m,k;
cin >> n >> m >>k;
vector<string> v(n);
for(int i=0;i<n;i++)
{
	cin >> v[i];
}

int ans=0,dotcount=0;

for(int i=0;i<n;i++)
{
	dotcount=0;
	for(int j=0;j<m;j++)
	{
		if(v[i][j]=='.')
		{
			dotcount++;
			if(dotcount>=k)
				ans++;
		}
		else
		{
			dotcount=0;
		}
	}
}

if(k!=1)
{
	for(int j=0;j<m;j++)
	{
	dotcount=0;
	for(int i=0;i<n;i++)
	{
		if(v[i][j]=='.')
		{
			dotcount++;
			if(dotcount>=k)
				ans++;
		}
		else
		{
			dotcount=0;
		}
	}
	}
}

cout << ans;

return 0;
}
