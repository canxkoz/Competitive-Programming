#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool IsPrime( int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  {
    return (false);
  }
 for( int k = 1; 36*k*k-12*k < number;++k)
    {
    if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
        {
            return (false);
        }
    }
  return true;
}


int main() {

    int n;
    cin >> n;
    int flag=1;
    for(int i=4;i<n&&flag;i++)
    {
        if(!IsPrime(i)&&!IsPrime(n-i))
            {
                cout << i << " " << n-i;return 0;
            }
    }

    return 0;
}
