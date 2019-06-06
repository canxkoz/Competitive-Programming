#include <bits/stdc++.h>
using namespace std;

int mini(int x, int y, int z)
{
    if(x<=y)
    {
        if(x<=z)
            return x;
        else if(z<=y)
            return z;
        else
            return y;
    }
    else
    {
        if(y<=z)
            return y;
        else
            return z;
    }
}


int main() {
    int  n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << mini(k*l/nl/n,c*d/n,p/np/n);
    return 0;
}
