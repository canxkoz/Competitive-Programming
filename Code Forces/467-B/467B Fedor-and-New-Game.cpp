#include<bits/stdc++.h>


using namespace std;


bool solve(int a,int b,int n,int k)
{
  int count=0;
  int arem,brem;
  int i=0;
  while(i<n)
  {
    arem=a%2;
    brem=b%2;
    if(arem!=brem)
      count++;
    a/=2;
    b/=2;
    i++;
  }
  if(count<=k)
    return true;
  return false;
}



int main() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(m);
    for(int i=0;i<m;i++)
    {
      cin >> v[i];
    }
    int x, occurances=0;
    cin >> x;
    for(int i=0;i<m;i++)
    {
      if(solve(x,v[i],n,k))
        occurances++;
    }
    cout << occurances;

return 0;
}
