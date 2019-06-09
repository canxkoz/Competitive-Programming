#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int n,k,max,min,count=0;
    cin >> n;
    cin >> k;
    max=k;
    min=k;
    n--;
    while(n--)
    {
        cin >> k;
        if(k>max)
            {count++;max=k;}
        if(k<min)
            {count++;min=k;}
    }
    cout << count;
    return 0;
}
