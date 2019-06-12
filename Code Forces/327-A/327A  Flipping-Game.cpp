#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int arr[n];
    int cumz[n];
    int cumo[n];

    cin >> arr[0];

    if(arr[0]==0)
    {
                cumz[0]=1;
                cumo[0]=0;
    }
    else
    {
            cumo[0]=1;
            cumz[0]=0;
    }

    for(int i=1;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]==0)
            {
                cumz[i]=1+cumz[i-1];
                cumo[i]=cumo[i-1];
            }
        else
        {
            cumo[i]=1+cumo[i-1];
            cumz[i]=cumz[i-1];
        }
    }


    int ans=0;
    int x;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            ans=max(ans,cumo[n-1]-(cumo[j]-cumo[i]+arr[i])+(cumz[j]-cumz[i]+1-arr[i]));
        }
    }

    cout << ans;

    return 0;
}
