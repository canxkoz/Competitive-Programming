#include<bits/stdc++.h>

using namespace std;

bool isdivisible(int k,int l,int m, int n, int d)
{
    if(d%k==0||d%l==0||d%m==0||d%n==0)
        return true;
    else
        return false;
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    reverse(s1.begin(),s1.end());
    if(s1==s2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
