#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    
    ll n,m,x,y=1;
    cin >> n >> m;
    ll sum=0;
    for(ll it=0;it<m;it++)
    {
      cin >> x;
      if(x>=y)
      {
        sum = sum + x - y;
        
      }
      else
      {
        sum = sum + n + x - y;
      }
      y=x;
      
    }
    cout << sum;
    return 0;
}
