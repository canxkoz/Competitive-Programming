#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int mid=1000000/2;

    vector<int> v1,v2;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<=mid)
            v1.pb(arr[i]);
        else
            v2.pb(arr[i]);
    }
    if(v1.size()==0)
    {
        cout << 1000000 - v2[0];
        return 0;
    }
    if(v2.size()==0)
    {
        cout << v1[v1.size()-1]-1;
        return 0;
    }

    int ans = max(v1[v1.size()-1]-1,1000000 - v2[0]);

    cout << ans;
return 0;
}
