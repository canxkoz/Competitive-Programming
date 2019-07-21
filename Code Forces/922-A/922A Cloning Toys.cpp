#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int x,y;
    cin >> x >> y;
    int ncopy=y-1;
    int rem=x-ncopy;
    if(x==0&&y==0)
    {
        cout << "No";
        return 0;
    }
    if(x==0&&y==1)
    {
        cout << "Yes";
        return 0;
    }
    if(x<y-1)
    {
        cout << "No";
        return 0;
    }
    if(rem%2==0&&ncopy>=1)
    {
        cout << "Yes";
        return 0;
    }

    cout << "No";

    return 0;
}
