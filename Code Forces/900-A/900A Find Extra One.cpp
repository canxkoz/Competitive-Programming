#include <bits/stdc++.h>

using namespace std;


int main() {
    int x,y,n;
    cin >> n;
    int posit=0,negat=0,onl=0;
    while(n--)
    {
        cin >> x >> y;
        if(x>0)
            posit++;
        if(x<0)
            negat++;
        if(x==0)
            onl++;

    }
    if(posit<=1||negat<=1&&onl==0)
    {
        cout << "Yes";return 0;
    }
    if(onl>1)
    {
        cout << "No";return 0;
    }
    if(onl==1&&posit==0||negat==0)
    {
        cout << "Yes";return 0;
    }
    cout << "No";

    return 0;
}
