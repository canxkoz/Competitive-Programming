#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    double sum=0,x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        sum+=x;
    }
    cout << setprecision(6) << fixed << sum/n;
    return 0;
}
