#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k;
    cin >> n >> k;
    int f,t;
    int maxi;
    cin >> f >> t;
    maxi=f;
    if(t>k)
    {
        maxi = f - (t-k);
    }
    for(int i=0;i<n-1;i++)
    {
        cin >> f >> t;
        if(t>k)
        {
            maxi = max( maxi, f-(t-k) );
        }
        else
        {
            maxi = max( maxi, f);
        }
    }
    cout << maxi;
    return 0;
}
