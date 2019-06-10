#include<bits/stdc++.h>

using namespace std;

int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

int arr[27];
for(int i=0;i<27;i++)
{
    arr[i]=0;
}
string s;
cin >> s;
int x;
int l=s.length();
for(int i=0;i<l;i++)
{
    x=(int)(s[i]-'a');
    arr[x]++;
}
int count=0;
for(int i=0;i<27;i++)
{
    if(arr[i])
    {
        count++;
    }
}
if(count%2==0)
{
    cout << "CHAT WITH HER!";
}
else
{
    cout << "IGNORE HIM!";
}
return 0;
}