#include<bits/stdc++.h>

using namespace std;


int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

string s,s1;
cin >> s;
int l=s.length();
stringstream ss;
for(int i=0;i<l;i++)
{
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    {
        ss << " ";
        i=i+2;
    }
    else
    {
        ss << s[i];
    }

}
s1=ss.str();
while(s1[0]==' ')
{
    s1.erase(s1.begin());
}
l=s1.length();
for(int i=0;i<l;i++)
{
    if(s1[i]==' '&&s1[i+1]==' ')
        s1.erase(s1.begin()+i);
}


cout << s1;

return 0;
}