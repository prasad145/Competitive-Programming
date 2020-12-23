#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a,k;
	cin>>t;
	
	while(t--)
	{
		int total=0,sum=0;
		vector<int> v;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			total+=a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		auto it=upper_bound(v.begin(),v.end(),k);
		int m=it-v.begin();
		for(int i=0;i<m;i++)
		{
			sum+=v[i];
		}
		//cout<<total<<sum<<m<<endl;
		cout<<total-(sum+(k*(n-m)))<<endl;
				

	}




		
	return 0;
}