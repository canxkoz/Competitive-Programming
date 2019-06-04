#include <bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin >> n;
int arr[n];
int oddc=0,evenc=0;
for (int i = 0; i < n; ++i)
{
	cin >> arr[i];
	if(arr[i]%2)
	{
		oddc++;
	}
	else
		evenc++;
}
if(oddc==1)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2)
		{
			cout << i+1;
			return 0;
		}
	}
}
for(int i=0;i<n;i++)
{
	if(arr[i]%2==0)
	{
		cout << i+1;
		return 0;
	}
}

return 0;
}
