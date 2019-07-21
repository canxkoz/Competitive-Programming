#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    cin >> s;
    int l=s.length();
    int count=0;

    for(int i=0;i<l;i++)
    {
      if(s[i]=='Q')
      {
        for(int j=i+1;j<l;j++)
        {
          if(s[j]=='A')
          {
            for(int k=j+1;k<l;k++)
            {
              if(s[k]=='Q')
                count++;
            }
          }
        }
      }
    }
    cout << count;
    return 0;
}
