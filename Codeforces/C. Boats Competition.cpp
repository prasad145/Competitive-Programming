#include<iostream>
#include<limits.h>
#include<unordered_map>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		unordered_map<int,int> chk;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			chk[x]++;
		}
		int maxi=0;
		for(int i=1;i<=2*n;i++)
		{
			int ans=0;
			for(auto j:chk)
			{
				int mate=i-j.first;
				if(mate>=1 && chk.count(mate))
				{
					ans+=min(j.second,chk[mate]);
				}
			}
			ans/=2;
			maxi=max(ans,maxi);
		}
		cout<<maxi<<endl;
	}
	return 0;
}