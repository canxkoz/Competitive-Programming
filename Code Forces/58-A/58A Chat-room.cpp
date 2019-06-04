#include<bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;
int l=s.length();
for(int i=0;i<l;i++)
{
    if(s[i]=='h')
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[j]=='e')
            {
                for(int k=j+1;k<l;k++)
                {
                    if(s[k]=='l')
                    {
                        for(int m=k+1;m<l;m++)
                        {
                            if(s[m]=='l')
                            {
                                for(int n=m+1;n<l;n++)
                                {
                                    if(s[n]=='o')
                                    {
                                        cout << "YES";
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
cout << "NO";

return 0;
}
