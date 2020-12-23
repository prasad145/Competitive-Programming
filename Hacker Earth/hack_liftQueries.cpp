#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,p,q,a=0,b=7;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		p=abs(a-n);
		q=abs(b-n);
		if(p<=q)
		{
			cout<<"A"<<endl;
			a=n;
		}
		else
		{
			cout<<"B"<<endl;
			b=n;
		}
	}
	return 0;
	
}
