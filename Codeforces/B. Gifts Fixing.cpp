#include<iostream>
#include<queue>
#define int long long
using namespace std;
int32_t main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		priority_queue<int,vector<int>,greater<int>> pq1,pq2;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			pq1.push(a[i]);
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			pq2.push(b[i]);
		}
		int ans=0;
		for(int i=0;i<n;i++)
		{
			ans+=max(a[i]-pq1.top(),b[i]-pq2.top());
		}

		cout<<ans<<endl;
	}
}	