#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,s;
		int a[n],b[n];
		cin>>n>>s;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int count=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(((a[i]+a[j])+s)<=100 && b[i]!=b[j])
				{
					cout<<"YES"<<endl;
					continue;
				}else
				{
					count++;
				}
			}
		}
		if(count>=(2*n-2))
		{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
