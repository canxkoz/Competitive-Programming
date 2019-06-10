#include<bits/stdc++.h>

using namespace std;

int main()
{
        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

int T;
cin >> T;
int count=0;
int a,b,c;

for(int i=0;i<T;i++)
{	
	
	cin >> a >> b >>c;
	
	if(a+b+c >1)
	{
		count=count+1;
	}
}		

cout << count;

return 0;
}