#include <bits/stdc++.h>
using namespace std;

int main() 
{
  vector<string> ChessBoard(8);
  for(int i=0;i<8;i++)
  {
    cin >> ChessBoard[i];
  }
  for(int i=0;i<8;i++)
  {
    for(int j=0;j+1<8;j++)
    {
      if(ChessBoard[i][j]==ChessBoard[i][j+1])
      {
        cout << "NO";
        return 0;
      }
    }
  }
  cout << "YES";

return 0;

}
