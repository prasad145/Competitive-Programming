#include<bits/stdc++.h>
using namespace std;
#define max 999
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g,p;
		cin>>g>>p;
		int largest,smallest;
		largest=p;
		smallest=g;
		if(g>p)
		{
			largest=g;
			smallest=p;
		}
		int n,ans;
		cin>>n;
		int a[max][2];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<2;j++)
			{
				cin>>a[i][j];
			}
		}
		int sum1=0,sum2=0;
		for(int i=0;i<n;i++)
		{
			sum1+=a[i][0];
		}
		for(int i=0;i<n;i++)
		{
			sum2+=a[i][1];
		}
		if(sum1>sum2)
		{
			ans=sum1*smallest+sum2*largest;
		}
		else
		{
			ans=sum1*largest+sum2*smallest;
		}
		cout<<ans<<endl;
		
		
	}
	return 0;
}
