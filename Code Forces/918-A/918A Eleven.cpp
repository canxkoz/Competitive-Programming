#include <bits/stdc++.h>
using namespace std;

#define int long long



int32_t main()
{
int fib[100];
fib[0]=0;
fib[1]=1;
fib[2]=1;
for(int i=3;fib[i-1]<=1000;i++)
{
	fib[i]=fib[i-1]+fib[i-2];
}
int n;
cin >> n;
int counter=2;
for(int i=1;i<=n;i++)
{
	if(i==fib[counter])
	{
		counter++;
		cout << "O";
	}
	else
	{
		cout << "o";
	}
}

return 0;
}
