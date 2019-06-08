#include <bits/stdc++.h>
using namespace std;
int main() {

    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    int l1=s1.length();
    int l2=s2.length();
    int l3=s3.length();
    int arr[27];
    for(int i=0;i<27;i++)
    {
        arr[i]=0;
    }
    int x;
    for(int i=0;i<l1;i++)
    {
        x = (int)(s1[i]-'A');
        arr[x]++;
    }
    for(int i=0;i<l2;i++)
    {
        x = (int)(s2[i]-'A');
        arr[x]++;
    }
    for(int i=0;i<l3;i++)
    {
        x = (int)(s3[i]-'A');
        arr[x]--;
    }
    for(int i=0;i<27;i++)
    {
        if(arr[i]!=0)
        {
            cout << "NO";
            return 0;
        }

    }
    cout << "YES";

    return 0;
}
