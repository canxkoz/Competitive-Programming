#include <bits/stdc++.h>
using namespace std;
#define int long long
#define uint unsigned long long
#define real long double

int32_t main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
