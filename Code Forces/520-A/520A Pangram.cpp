#include <bits/stdc++.h>
using namespace std;


int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   int x;
   int arr[26]={0};
   for(int i=0;i<n;i++)
   {
    x = (int)(tolower(s[i])-'a');
    arr[x]++;
   }
   int ans=1;
   for(int i=0;i<26;i++)
   {
    ans=ans*arr[i];
   }
   if(ans==0)
    cout << "NO";
  else
    cout << "YES";


   return 0;
}
