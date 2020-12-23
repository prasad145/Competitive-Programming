#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p=0,m=0,sum=0,sum1=0;
	cin>>n;
	//n--->n*2   |n+n*2
	while(p<n && m<n)
	{
		p++;
		sum+=p;
		if(sum>=n)
		{
			cout<<"Patlu"<<endl;
			break;
		}
		m=p*2;
		sum+=m;
		if(sum>=n)
		{
			cout<<"Motu"<<endl;
			break;
		}
		
	}
	return 0;
	//cout<<p<<endl;
	//cout<<m;
}
