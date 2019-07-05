#include<bits/stdc++.h>
using namespace std;

int minimum(int a,int b,int c)
{
  if(a<=b)
  {
    if(a<=c)
      return a;
    return c;
  }
  if(b<=c)
    return b;
  return c;
}



int main()
{
      int a,b,c;
      cin >> a >> b >> c;
      int d=a+b+c;
      int e=a*b+c;
      int f=a+b*c;
      int g=a*b*c;
      int h=(a+b)*c;
      int i=a*(b+c);
      cout << max((max((max(max(max(h,i),d),e)),f)),g);
      return 0;
}
