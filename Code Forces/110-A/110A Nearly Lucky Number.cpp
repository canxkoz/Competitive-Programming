#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int luckycount=0,n,x;
    string s;
    cin >> s;
    n=s.length();
    for(long long int i=0;i<n;i++)
    {
        x=(int)(s[i]-'0');
        if(x==4||x==7)
        {
            luckycount++;
        }
    }
    int flag=1;
    stringstream ss;

    ss<<luckycount;
    string s2;
    s2=ss.str();
    n=s2.length();

    for(int i=0;i<n&&flag;i++)
    {
        x=(int)(s2[i]-'0');
        if(x!=4&&x!=7)
        {
            flag=0;
        }
    }

    if(flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
return 0;
}
