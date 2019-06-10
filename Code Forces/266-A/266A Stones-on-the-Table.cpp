#include<bits/stdc++.h>

using namespace std;

int main(){
    int l;
    cin >> l;
    string s;
    cin >> s;
    int count=0;
    for(int i=0;i<l-1;i++)
    {
        if(s[i]==s[i+1])
            count++;
    }
    cout << count;
    return 0;
}
