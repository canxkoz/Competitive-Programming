#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int y=0,a;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        y+=a;
    }
    y=abs(y);
    int ans=y/x;
    if(y%x!=0)
        ans++;
    cout << ans;

    return 0;
}
