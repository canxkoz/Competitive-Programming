#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define vlli vector<long long int>

int main() 
{
    long long a,b,c,quo;
    cin >> a >> b >> c;
    for(int i=0;i<=100000;i++)
    {
        a=a*10;
        quo=a/b;
        if(quo==c)
        {
            cout << i+1;return 0;
        }
        a=a%b;
    }

    cout << "-1";
        return 0;
}
