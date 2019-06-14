#include<bits/stdc++.h>

using namespace std;


int main(){
    int n,count=0;
    cin >> n;
    int x,y;
    cin >> x;
    y=x;
    n--;
    while(n--)
    {
        cin >> x;
        if(x!=y)
            count++;
        y=x;
    }
    cout << count + 1;
    return 0;
}
