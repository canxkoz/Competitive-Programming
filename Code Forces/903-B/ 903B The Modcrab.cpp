#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define vlli vector<long long int>

int main() 
{
    
    int h1,a1,c1;
    cin >> h1 >> a1 >> c1;
    int h2,a2;
    cin >> h2 >> a2;
    vector<string> v;
    for(int i=0;h2>0&&h1>0;i++)
    {
        if(h1-a2<=0&&h2-a1>0)
            {
                v.push_back("HEAL");
                h1=h1+c1;
            }
        else
        {
            v.push_back("STRIKE");
            h2=h2-a1;
        }
        h1=h1-a2;
    }
    cout << v.size() << "\n";
    int l=v.size();
    for(int i=0;i<l;i++)
    {
        cout << v[i] << "\n";
    }
    return 0;

}
