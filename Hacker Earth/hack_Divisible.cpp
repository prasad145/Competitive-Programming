#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],sume=0,sumo=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i<n/2)
		{
			while(a[i]>=10)
			{
				a[i]/=10;
				
			}
			//cout<<a[i]<<endl;
			if(i%2==0)
			{
				sume+=a[i];
			}
			else
			{
				sumo+=a[i];
			}
			
		}
		else
		{
			int m=a[i]%10;
			if(i%2==0)
			{
				sume+=m;
			}
			else
			{
				sumo+=m;
			}
			
		}
		
	}
	//cout<<
	if(abs(sume-sumo)%11==0)
	{
		cout<<"OUI"<<endl;
	}
	else
	{
		cout<<"NON"<<endl;
	}
	return 0;
}
