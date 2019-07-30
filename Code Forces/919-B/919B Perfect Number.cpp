#include <bits/stdc++.h>
using namespace std;

#define int long long

bool perfect(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
	if(sum==10)
		return true;
	else
		return false;
}


int32_t main()
{

int count=0;
int i=1;
int ans=0;
int k;
cin >> k;
while(count<k)
{
	if(perfect(i))
	{
		count++;
		ans=i;
		i++;
	}
	else
	{
		i++;
	}
}

cout << ans;

return 0;
}
