#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    cin >> s;
    int l=s.length();
    int upc=0,lc=0;
    for(int i=0;i<l;i++)
    {
        if(isupper(s[i]))
            upc++;
        else
            lc++;
    }
    if(upc<=lc)
    {
        for(int i=0;i<l;i++)
        {
            s[i]= tolower(s[i]);
        }
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            s[i]= toupper(s[i]);
        }
    }
    cout << s;


    return 0;
}
