#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct pointer
{
  int i;
  int j;
};

pointer Down(pointer a)
{
  a.i++;
  return a;
}
pointer Right(pointer a)
{
  a.j++;
  return a;
}
pointer Up(pointer a)
{
  a.i--;
  return a;
}
pointer Left(pointer a)
{
  a.j--;
  return a;
}

int direction(vector<string> &maze,int n,int m,pointer start,pointer end,string ans)
{
  string keys="DLRU";
  char c1,c2,c3,c4;
  int count=0;
  int found;
  for(int keys_i=1;keys_i<25;keys_i++)
  {
    c1=keys[0];
    c2=keys[1];
    c3=keys[2];
    c4=keys[3];
    pointer st=start;
    found=1;
    for(int j=0;j<ans.length()&&found;j++)
    {
      if(ans[j]=='0')
      {
        if(c1=='D')
          st=Down(st);
        else if(c1=='L')
          st=Left(st);
        else if(c1=='R')
          st=Right(st);
        else
          st=Up(st);
      }
      else if(ans[j]=='1')
      {
        if(c2=='D')
          st=Down(st);
        else if(c2=='L')
          st=Left(st);
        else if(c2=='R')
          st=Right(st);
        else
          st=Up(st);
      }
      else if(ans[j]=='2')
      {
        if(c3=='D')
          st=Down(st);
        else if(c3=='L')
          st=Left(st);
        else if(c3=='R')
          st=Right(st);
        else
          st=Up(st);
      }
      else 
      {
        if(c4=='D')
          st=Down(st);
        else if(c4=='L')
          st=Left(st);
        else if(c4=='R')
          st=Right(st);
        else
          st=Up(st);
      }

      if(st.i<0||st.i>=n)
      {
        found=0;
      }
      else if(st.j<0||st.j>=m)
      {
        found=0;
      }
      else if(maze[st.i][st.j]=='#')
      {
        found=0;
      }
      else if(maze[st.i][st.j]=='E')
      {
        count++;
        found=0;
      }


    }

    next_permutation(keys.begin(),keys.end());
  }
  return count;
}





int main()
{
  pointer start,end;
  int n,m;
  cin >> n >> m;
  vector<string> maze(n);
  for(int i=0;i<n;i++)
  {
    cin >> maze[i];
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(maze[i][j]=='S')
        {
          start.i=i;
          start.j=j;
        }
      else if(maze[i][j]=='E')
      {
        end.i=i;
        end.j=j;
      }  

    }
  }
  string s;
  cin >> s;

  cout << direction(maze,n,m,start,end,s);
  
  return 0;
}
