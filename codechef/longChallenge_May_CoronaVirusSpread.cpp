#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,b,a,count=1,min=INT_MAX,max=1;
		cin>>n>>b;
		for(int i=1;i<n;i++)
		{
			cin>>a;
			if(a-b<3)
			{
				count++;
			}
			else
			{
				if(count<min)
				{
					min=count;
				}
				if(count>max)
				{
					max=count;
				}
				count=1;
			}
			b=a;
		}
		if(count<min)
		{
			min=count;
		}
		if(count>max)
		{
			max=count;
		}
		
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}
