#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      for(int i=0;i<n;i++)
      {
        string s;
        cin >> s;
        if(s.length()>10)
        {
          stringstream ss;
          int l;
          l=s.length()-2;
          ss << s[0] << l << s[s.length()-1];
          cout << ss.str() << endl;
        }
        else
          cout << s << endl;
      }
    return 0;
}
