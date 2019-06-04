#include<bits/stdc++.h>
using namespace std;

int main()
{
  
      long long n,m,a,prod1,prod2;
      cin >> n >> m >> a;
      if(n%a==0)
        prod1=n/a;
      else
        prod1=n/a+1;
      if(m%a==0)
        prod2=m/a;
      else
        prod2=m/a+1;
      cout << prod2*prod1;
    
    return 0;
}
