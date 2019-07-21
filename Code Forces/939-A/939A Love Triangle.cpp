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

    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[arr[arr[arr[i]-1]-1]-1]&& (i+1)!=arr[arr[i]-1])
            {cout << "YES";
                return 0;
            }

    }
    cout << "NO";

return 0;
}
