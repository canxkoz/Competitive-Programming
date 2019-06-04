#include <bits/stdc++.h>
using namespace std;

int main() 
{

  int n;
  cin >> n;
  map<string,int> m;
  string s;
  for(int i=0;i<n;i++)
  {
    cin >> s;
    map<string,int>::iterator itr;
    itr=m.find(s);
    if(itr==m.end())
    {
      cout << "OK\n";
      m.insert(make_pair(s,1));
    }
    else
    {
      int x=itr->second;
      cout << s << x << "\n";
      x++;
      m.erase(s);
      m.insert(make_pair(s,x));
    }
  }
return 0;

}
