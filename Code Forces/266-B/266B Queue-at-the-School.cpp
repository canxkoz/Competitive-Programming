#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t,i;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--)
    {
        i=0;
        while(i+1<n)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i=i+2;
            }
            else
            {
                i++;
            }
        }
    }
    cout << s;
    return 0;
}
