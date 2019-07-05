#include<bits/stdc++.h>

using namespace std;


int main(){
    int n,p,q,prod=1;
    cin >> n;
    int arr[n+1];

    for(int i=0;i<n+1;i++)
    {
        arr[i]=0;
    }
    arr[0]=1;
    cin >> p;
    int x;
    for(int i=0;i<p;i++)
    {
        cin >> x;
        arr[x]=1;
    }
    cin >> q;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        arr[x]=1;
    }
    for(int i=0;i<n+1;i++)
    {
        prod=prod*arr[i];
    }
    if(prod)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}
