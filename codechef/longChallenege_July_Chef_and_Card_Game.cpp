#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,win_countb=0,win_counta=0;
    cin>>n;
    while(n--)
    {
      int a,b,rem_suma=0,rem_sumb=0;
      cin>>a>>b;
      if(a<10 && b<10)
      {
        if(a==b)
        {
          win_countb++;
          win_counta++;
        }
        else
        {
          if(a>b)
            win_counta++;
          else
            win_countb++;
        }
      }
      else
      {
        while(a>0)
        {
          rem_suma+=(a%10);
          a/=10;
        }
        while(b>0)
        {
          rem_sumb+=(b%10);
          b/=10;
        }
        if(rem_sumb==rem_suma)
        {
          win_countb++;
          win_counta++;
        }
        else
        {
          if(rem_sumb>rem_suma)
          {
            win_countb++;
          }
          else
          {
            win_counta++;
          }
        }
      }
    }
    if(win_counta==win_countb)
    {
      cout<<2<<" "<<win_counta<<endl;
    }
    else
    { 
      if(win_counta>win_countb)
      {
        cout<<0<<" "<<win_counta<<endl;
      }
      else
      {
        cout<<1<<" "<<win_countb<<endl;
      }
    }
  }
  return 0;
}