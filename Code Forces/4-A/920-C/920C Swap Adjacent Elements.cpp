#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define real long double
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ss second
#define ff first
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

#define mod 1000000007


#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl



int32_t main()
{
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; ++i)
{
	/* code */
	cin >> arr[i];
}
string s;
cin >> s;

for(int i=0;i<n;i++)
{
	

	if(s[i]=='0') i++;
	
	int j=i;
	while(s[i]=='1'&&i<n)
	{
			i++;
	}
	sort(arr+j,arr+i+1);
	
}

for(int i=0;i<n-1;i++)
{
	
	if(arr[i+1]<arr[i])
	{
		cout << "NO";
		return 0;
	}
}
cout << "YES";

return 0;
}
