#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int flag=0;
    int l=s.length();
    int countz=0,counto=0;
    int max;
      for(int i=0;i<l;i++)
      {
        if(((int)(s[i]-'0')))
        {
          countz=0;
          counto++;
          if(counto==7)
          {
            flag=1;break;
          }
        }
        else
        {
          counto=0;
          countz++;
          if(countz==7)
          {
            flag=1;break;
          }
        }
      }
    if(flag)
      cout << "YES";
    else
      cout << "NO";
return 0;
}
