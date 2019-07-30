#include <bits/stdc++.h>
using namespace std;

#define int long long

struct ip
{
	int a;
	int b;
	int c;
	int d;
};

struct command
{
	string comm;
	ip address;
};

bool so(command x,command y)
{
	if(x.address.a==y.address.a)
	{
		if(x.address.b==y.address.b)
		{
			if(x.address.c==y.address.c)
			{
				return x.address.d<y.address.d;
			}
			return x.address.c<y.address.c;
		}
		return x.address.b<y.address.b;
	}
	return x.address.a<y.address.a;
}

string binarysearch(vector<command> v,int low,int high,command key)
{
	while(low<=high)
    { 
        int mid = (high+low)/2;

        if(v[mid].address.a==key.address.a)
        {
        	if(v[mid].address.b==key.address.b)
        	{
        		if(v[mid].address.c==key.address.c)
        		{
        			if(v[mid].address.d==key.address.d)
        			{
        				return v[mid].comm;
        			}
        			else if(v[mid].address.d<key.address.d)
        			{
        				low=mid+1;
        			}
        			else
        			{
        				high=mid-1;
        			}
        		}
        		else if(v[mid].address.c<key.address.c)
        		{
        			low=mid+1;
        		}
        		else
        		{
        			high=mid-1;
        		}
        	}
        	else if(v[mid].address.b<key.address.b)
        	{
        		low=mid+1;
        	}
        	else
        	{
        		high=mid-1;
        	}
        }
        else if(v[mid].address.a<key.address.a)
        {
        	low=mid+1;
        }
        else
        {
        	high=mid-1;
        }

    }
    return "?";
}


int32_t main()
{

        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif

int n,m;

cin >> n >> m;

vector<command> v(n);

char ch;
string s;

command ans;

for(int i=0;i<n;i++)
{
	cin >> v[i].comm;
	cin >> v[i].address.a;
	cin >> ch;
	cin >> v[i].address.b;
	cin >> ch;
	cin >> v[i].address.c;
	cin >> ch;
	cin >> v[i].address.d;
	
}

sort(v.begin(),v.end(),so);

for(int i=0;i<m;i++)
{
	cin >> s;
	cout << s << " ";
	cin >> ans.address.a;
	cout << ans.address.a;
	cin >> ch;
	cout << ch;
	cin >> ans.address.b;
	cout << ans.address.b;
	cin >> ch;
	cout << ch;
	cin >> ans.address.c;
	cout << ans.address.c;
	cin >> ch;
	cout << ch;
	cin >> ans.address.d;
	cout << ans.address.d;
	cin >> ch;
	cout << ch;
	cout << " #";
	cout << binarysearch(v,0,n-1,ans);
	cout << "\n";
}

return 0;
}
