#include <bits/stdc++.h>
using namespace std;

int maximum(int a,int b,int c)
{
  if(a>=b)
  {
    if(a>=c)
      return a;
    return c;
  }
  if(b>=c)
    return b;
  return c;
}

int deletelastdigit(int a)
{
  int x=a/10;
  return x;
}
int deletedigitbeforelast(int a)
{
  int x=a%10;
  int y=a/100;
  y=y*10+x;
  return y;
}

int main() 
{
  int n;
  cin >> n;
  cout << maximum(n,deletedigitbeforelast(n),deletelastdigit(n));
return 0;
}
