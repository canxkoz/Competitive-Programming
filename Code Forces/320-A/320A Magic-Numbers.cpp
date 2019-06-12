#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l=s.length();
    int i=0;
    while(i<l)
    {
      if(s[i]=='1')
      {
        if(s[i+1]=='4')
        {
          if(s[i+2]=='4')
          {
            i=i+3;
          }
          else
          {
          i=i+2;
          }
        }
        else
        {
          i++;
        }
      }
      else
      {
        cout << "NO";
        return 0;
      }
    }
    cout << "YES";
    return 0;
}
