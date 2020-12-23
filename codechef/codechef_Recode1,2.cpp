#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j+1] &&a[i]!=a[j])
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			cout<<"1\n";
		}
		else
		{
			cout<<count<<endl;
		}
		
	}
	return 0;
}
