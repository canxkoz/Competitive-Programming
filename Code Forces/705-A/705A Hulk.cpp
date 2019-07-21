#include <bits/stdc++.h>
using namespace std;


int main()
{  
   int n;
   cin >> n;
   cout << "I ";
   for(int i=0;i<n;i++)
   {
    if(i%2==0)
      cout << "hate ";
    else
      cout << "love ";
    if(i+1<n)
      cout << "that I ";
   }
   cout << "it"; 
    return 0;
}
