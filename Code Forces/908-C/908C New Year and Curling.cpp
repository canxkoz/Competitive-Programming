#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

ld height(ld r,ld d1,ld d2)
{
  return sqrt(abs(4*r*r-(d1-d2)*(d1-d2)));
}
struct circle
{
  ld ci;
  ld cj;
};


int main()
{
  int n,r;
  cin >> n >> r;
  vector<ld> v(n);
  vector<ld> hei(n);
  for(int i=0;i<n;i++)
  {
    cin >> v[i];
  }

  for(int i=0;i<n;i++)
  {
    hei[i]=r;
    for(int j=0;j<i;j++)
    {
      if(abs(v[j]-v[i])<=2*r)
      {
        hei[i]=max(hei[i],height(r,v[i],v[j])+hei[j]);
      }
    }
    cout << setprecision(10) << fixed << hei[i] << " ";
  }
  
  return 0;
}
