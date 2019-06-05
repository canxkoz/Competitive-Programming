#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int l=s1.length();
    int x,y,z;
    for(int i=0;i<l;i++)
    {
        x = (int)(s1[i]-'0');
        y = (int)(s2[i]-'0');
        z=x^y;
        cout << z;
    }
    return 0;
}
