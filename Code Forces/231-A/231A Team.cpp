#include<bits/stdc++.h>

using namespace std;

int main()
{

    int T;
    cin >> T;
    int count=0;
    int a,b,c;

    for(int i=0;i<T;i++)
    {
        
        cin >> a >> b >>c;
        
        if(a+b+c >1)
        {
            count=count+1;
        }
    }

    cout << count;

    return 0;
}
