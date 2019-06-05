#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x,y;
    int sum=0,max=0;
    while(n--)
    {
        cin >> x >> y;
        sum=sum-x;
        sum=sum+y;
        max=max>sum?max:sum;
    }
    cout << max;
return 0;
}
