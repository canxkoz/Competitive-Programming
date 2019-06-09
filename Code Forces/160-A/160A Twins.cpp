#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int sum=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        sum=sum+v[i];
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++)
    {
        sum2=sum2+v[i];
        if(sum2>sum/2)
            {
                cout << i+1;
                return 0;
            }

    }
return 0;
}
