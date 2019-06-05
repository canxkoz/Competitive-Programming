#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    stringstream ss;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
        {}
        else
        {
            char ch;
            ch=tolower(s[i]);
            ss << '.' << ch;
        }
    }
    cout << ss.str();
return 0;
}
