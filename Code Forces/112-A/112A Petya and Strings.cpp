#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int l=s1.length();
    char a,b;
    for(int i=0;i<l;i++)
    {
        a=s1[i];
        b=s2[i];
        if(islower(a))
        {
            a=a-32;
        }
        if(islower(b))
        {
            b=b-32;
        }
        if(a!=b)
        {
            if(a>b)
                {cout << "1";return 0;}
            else
                {cout << "-1";return 0;}
        }
    }
    cout << "0";
    return 0;
}
