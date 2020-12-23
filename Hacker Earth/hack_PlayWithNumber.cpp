#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(m--)
	{
		int c,b,sum=0;
		cin>>c>>b;
		
		for(int i=c;i<=b;i++)
		{
			sum+=(a[i]);
			
		}
		cout<<(sum/(abs(c-b)+1))<<endl;

	}
	return 0;
	
}
