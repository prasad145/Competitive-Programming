#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		while(1)
		{
			if(n==1)
			{
				flag=1;
				break;
			}else
			if(n%2==0)
			{
				n/=2;
			}
			else
			{
				n=(3*n)+1;
			}
		}
		if(flag==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
