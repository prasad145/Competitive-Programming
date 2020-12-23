#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    vector<int> a,b;
    int ans=0,e;
    unordered_map<int,int> chk;
    for(int i=0;i<n;i++)
    {
      cin>>e;
      chk[e]++;
    }
    int flag=0;
    for(int i=0;i<m;i++)
    {
      cin>>e;
      if(chk.count(e)!=0)
      {
        flag=e;
      }

    }
    if(flag==0)
    {
      cout<<"NO"<<endl;
    }
    else
    {
      cout<<"YES"<<endl;
      cout<<"1"<<" "<<flag<<endl;
    }
  }
  return 0;
}