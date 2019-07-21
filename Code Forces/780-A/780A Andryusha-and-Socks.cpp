#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool arr[100001];
    for(int i=0;i,i<100001;i++)
    {
        arr[i]=false;
    }
    int n;
    cin >> n;
    int x;
    int count=0;
    int maxcount=0;
    for(int i=0;i<2*n;i++)
    {
        cin >> x;
        if(arr[x]==true)
        {
            arr[x]=false;
            count--;
        }
        else
        {
            count++;
            maxcount=max(maxcount,count);
            
            arr[x]=true;
        }

    }

    cout << maxcount;

    return 0;
}
