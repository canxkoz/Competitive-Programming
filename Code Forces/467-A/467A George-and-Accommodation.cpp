#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int n,x,y,count=0;
    cin >> n;
    while(n--)
    {
        cin >> x >> y;
        if(y-x>=2)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
