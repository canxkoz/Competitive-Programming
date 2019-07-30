#include <bits/stdc++.h>
using namespace std;

#define int long long

#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl

struct student
{
int l;
int r;
int index;
};

int32_t main()
{

int t;
cin >> t;
while(t--)
{
	int n;
	cin >> n;
	int timecount=0;
	student arr[n];
	int ans[n];

	for(int i=0;i<n;i++)
	{
		cin >> arr[i].l >> arr[i].r;
		arr[i].index=i;
	}
	vector<student> v(n);
	v.clear();

	int start=0;
	int count=0;

	while(count<n)
	{
		for(int i=start;arr[i].l<=timecount;i++)
		{
			if(arr[i].l==timecount)
			{
				v.push_back(arr[i]);
				start=i;
			}
		}

		int flag=1;

		if(!v.empty())
		{
			while(flag)
			{
				if(v.empty())
				{
					flag=0;
				}
				else
				{

				student going = v[0];

				if(going.r<timecount)
				{
					ans[going.index]=0;
					v.erase(v.begin());
					count++;
				}
				else
				{
					ans[going.index]=timecount;
					v.erase(v.begin());
					count++;
					flag=0;
				}

				}
			}

		}

		timecount++;
	}
	for(int i=0;i<n;i++)
	{
		cout << ans[i] << " "; 
	}
	cout << endl;
}

return 0;
}
