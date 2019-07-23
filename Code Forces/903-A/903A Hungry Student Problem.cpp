#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define vlli vector<long long int>

int main() 
{
    int n;
    cin >> n;
    vi v;
    int x;
    bool arr[101]={false};
    int i=0,j=0;
    for(i=0;i<35;i++)
    {
        for(j=0;j<16&&3*i+7*j<101;j++)
        {
            arr[3*i+7*j]=true;
        }
    }
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(arr[x])
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
    return 0;
}
