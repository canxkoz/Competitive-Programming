#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,x;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v(n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v[i] = x + k;
        if(x+k<=5)
            count++;
    }
    cout << count/3;
    return 0;
}
