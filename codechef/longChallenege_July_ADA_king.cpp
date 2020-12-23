#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define int64 unsigned long long int
signed main()
{
//author: @prasad145 
// happy coding XD
  int t;
  cin>>t;
  while(t--)
  {
    int k;
    cin>>k;
    char chess[8][8];
    chess[0][0]='O';
    k--;
    for(int i=0;i<8;i++)
    {
      for(int j=0;j<8;j++)
      {
        if(i==0 && j==0)
        {
          continue;
        }
        else
        if(k>0)
        {
          chess[i][j]='.';
          k--;
        }
        else
        {
          chess[i][j]='X';
        }

      }
    }
    for(int i=0;i<8;i++)
    {
      for(int j=0;j<8;j++)
      {
        cout<<chess[i][j];
      }
      cout<<endl;
    }
  }
    return 0;
}