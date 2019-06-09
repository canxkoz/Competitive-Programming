#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n,a,b,c;
    cin >> n >> a >> b >> c;

    int ans=0;

    for(int x=0;x*a<=n;x++)
    {
        for(int y=0;y*b<=n;y++)
        {
            if((n-x*a-y*b)%c==0)
            {
                int z = (n - x*a - y*b)/c;
                if(z>=0)
                {
                ans = max(ans,x+y+z);
                }
            }
        }
    }

    cout << ans;

    return 0;
}
