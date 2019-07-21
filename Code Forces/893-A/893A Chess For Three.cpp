#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define vlli vector<long long int>

int main() 
{
    int x=1,y=2,z=3,store,n,input;
    cin >> n;
    int flag=1;
    while(n--&&flag)
    {
        cin >> input;
        if(input==x)
        {
            store=y;
            y=z;
            z=store;
        }
        else if(input==y)
        {
            store=x;
            x=z;
            z=store;
        }
        else
        {
            flag=0;
        }
    }
    if(flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
