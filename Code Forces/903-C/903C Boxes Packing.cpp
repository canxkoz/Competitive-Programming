#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define vlli vector<long long int>

int main() 
{
    int n;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int count=0,max=0;
    int key=v[0];
    for(int i=0;i<n;i++)
    {
            if(key==v[i])
            {
                count++;
                max = max>count?max:count;
                key=v[i];
            }
            else
            {
                count=1;
                key=v[i];
            }
    }
    cout << max;
    return 0;
}
