#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,x;
    cin >> n;
    std::vector<int> v(n);
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        v[x-1]=i;
    }
    for(int i=0;i<n;i++)
    {
       cout << v[i] << " ";
    }
return 0;
}
