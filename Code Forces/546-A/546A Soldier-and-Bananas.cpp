#include<bits/stdc++.h>

using namespace std;

int main(){
    
    long long int k,n,w,sum;
    cin >> k >> n >> w;
    sum = (k*(w+1)*(w))/2;

    if(sum-n>=0)
    {
        cout << sum-n;
    }
    else
    {
        cout << "0";
    }

    return 0;
}
