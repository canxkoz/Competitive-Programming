#include <bits/stdc++.h>
using namespace std;



int main()
{
       
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
 	
 	int n,x;
 	cin >> n;
 	int curr=numeric_limits<int>::max();
 	int pos,ans=numeric_limits<int>::max();
 	for(int i=0;i<n;i++)
 	{
 		cin >> x;
 		if(x<curr)
 		{
 			curr=x;
 			pos=i;
 			ans=numeric_limits<int>::max();
 		}
 		else if(x==curr)
 		{
 			ans=min(ans,i-pos);
 			pos=i;
 		}
 	}
 	cout << ans;

	return 0;
}