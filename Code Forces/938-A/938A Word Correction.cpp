#include <bits/stdc++.h>
using namespace std;

int correct(string s)
{
    int l=s.length();
    if(l==1)
        return -1;
    for(int i=0;i<l-1;i++)
    {
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='y'))
        {
            return i+1;
        }
    }
    return -1;
}

int32_t main()
{

        FastIO;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
int l;
cin >> l;
string s;
cin >> s;
int x;
while(correct(s)!=-1)
{
    x=correct(s);
    s.erase(s.begin() + x);
}
cout << s;

return 0;
}
