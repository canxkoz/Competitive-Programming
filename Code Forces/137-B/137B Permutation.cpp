#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[5001];
    for(int i=0;i<5001;i++)
    {
      arr[i]=0;
    }
    int x;
    for(int i=0;i<n;i++)
    {
      cin >> x;
      arr[x]++;
    }
    int count=0;
    for(int i=1;i<=n;i++)
    {
      if(arr[i]==0)
      {
        count++;
      }
    }
    cout << count;
    return 0;
}
