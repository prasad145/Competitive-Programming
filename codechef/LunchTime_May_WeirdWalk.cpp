#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,a;
		cin>>n;
		vector<int> v1,v2;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v1.push_back(a);
		}
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v2.push_back(a);
		}
		int suma=0,sumb=0,ans=0;
		for(int i=0;i<v1.size();++i)
		{
			suma+=v1[i];
			sumb+=v2[i];
			if(v1[i]==v2[i] && sumb==suma)
			{
				ans+=v1[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}