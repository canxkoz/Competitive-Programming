#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{

int n,m;
cin >> n >> m;

long double a,b,ans=numeric_limits<long double>::max();
while(n--)
{
	cin >> a >> b;
	ans = min(ans,a/b);
}
cout << fixed << setprecision(10) << ans*m;

return 0;
}
