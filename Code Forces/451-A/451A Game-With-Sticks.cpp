#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int x=min(n,m);
    if(x%2==0)
        cout << "Malvika";
    else
        cout << "Akshat";
return 0;
}
