#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n,k;
    cin >> n >> k;
    int x;
    int arr[n];
    int ansindex=1;
    int ans=0;
    int compare=0;

    for(int i=0;i<k;i++)
    {
        cin >> x;

        if((x*((int)n/x))>compare)
        {
            compare=x*((int)n/x);
            ans=n/x;
            ansindex=i+1;
        }
    }

    cout << ansindex << " " << ans;
    return 0;
}
