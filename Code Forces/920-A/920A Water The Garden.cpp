#include <bits/stdc++.h>
using namespace std;

#define int long long

#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl

bool arr[201]={0};


int increment(int start,int end)
{
	int cnt=0;
	bool initialarr[end];

	for(int i=0;i<end;i++)
	{
		initialarr[i]=arr[i];
	}

	for(int i=start;i<end;i++)
	{
		if(initialarr[i])
		{
			if(i-1>=0)
			{
				if(initialarr[i-1]==0)
				{
					if(arr[i-1]!=1)
					{
						arr[i-1]=1;
						cnt++;

					}
					
				}
			}
			if(i+1<end)
			{
				if(initialarr[i+1]==0)
				{
					if(arr[i+1]!=1)
					{
						arr[i+1]=1;
						cnt++;

					}
				}
			}
		}
	}

	return cnt;
}


int32_t main()
{

int t;
cin >> t;
while(t--)
{
	int n,k;
	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		arr[i]=0;

	}
	int count=k;
	int x;
	for(int i=0;i<k;i++)
	{
		cin >> x;
		arr[x-1]=1;
	}
	int t=1;
	while(count<n)
	{
		count = count + increment(0,n);
		t++;
	}
	cout << t << "\n";

}

return 0;
}
