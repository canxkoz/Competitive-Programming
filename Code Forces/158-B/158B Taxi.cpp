#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[5];
    
    for(int i=0;i<5;i++)
    {
        arr[i]=0;
    }
    int x;
    
    while(n--)
    {
        cin >> x;
        arr[x]++;
    }
    int count=0;

    count+=arr[4];
    

    if(arr[3]<=arr[1])
    {
        count+=arr[3];
        arr[1]=arr[1]-arr[3];
    }
    else
    {
        arr[1]= 0;
        count = count + arr[3];
    }
    

    if(arr[2]%2==0)
    {
        count = count + arr[2]/2;
    }
    else
    {
        count = count + arr[2]/2;
        arr[1]=arr[1]+2;
    }
    

    if(arr[1]%4==0)
    {
        count = count + arr[1]/4;
    }
    else
    {
        count = count + arr[1]/4 + 1;
    }

    cout << count;
    return 0;
}
