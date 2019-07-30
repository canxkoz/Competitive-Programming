#include <bits/stdc++.h>
using namespace std;

bool hundr(int x)
{
	x=x/10;
	if(x%10==7)
		return true;
	return false;
}

int main()
{
 	int n,hh,mm;
 	cin >> n >> hh >> mm;
 	int count=0;
 	while(1)
 	{
 		if(mm%10==7||hh%10==7||hundr(mm)||hundr(hh))
 		{
 			cout << count;
 			return 0;
 		}
 		else
 		{
 			mm = mm - n;
 			count++;
 			if(mm<0)
 			{
 				mm = mm + 60;
 				hh--;
 			}
 			
 			if(hh<0)
 			{
 				hh=23;
 			}
 		}
 	}


	return 0;
}
