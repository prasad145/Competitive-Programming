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
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n*2;j++)
			{
				if((j>=i+1) && (j<=2*n-i))
				{
					cout<<"#";
				}
				else
				{
					cout<<"*";
				}
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
