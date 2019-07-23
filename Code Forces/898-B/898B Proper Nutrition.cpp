#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{

    int n,a,b,x;
    cin >> n >> a >> b;

    for(int i=0;n>=0;i++)
    {
        
        if((n%b)==0)
        {
          cout << "YES\n";
          cout << i << " " << n/b;
          return 0;
         }
         n=n-a;
    }

    cout << "NO";
        return 0;

}
