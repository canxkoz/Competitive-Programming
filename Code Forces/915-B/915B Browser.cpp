#include <bits/stdc++.h>
using namespace std;



int main()
{
 	int n,pos,l,r;
 	cin >> n >> pos >> l >> r;
 	
 	int count=0;

 	bool left=true;
 	bool right=true;

 	if(l==1)
 	{
 		left=false;
 	}

 	if(r==n)
 	{
 		right=false;
 	}

 	if(left&&pos-l<=r-pos)
 	{
 		count+=abs(pos-l);
 		count++;
 		pos=l;
 		left=false;
 	}
 	if(right&&pos-l>r-pos)
 	{
 		count+=abs(r-pos);
 		count++;
 		pos=r;
 		right=false;
 	}	 	

 	if(left)
 	{
 		count+=abs(pos-l);
 		count++;
 		pos=l;

 	}
 	
 	if(right)
 	{
 		count+=abs(r-pos);
 		count++;
 		pos=r;
 	}


 	cout << count;


	return 0;
}
