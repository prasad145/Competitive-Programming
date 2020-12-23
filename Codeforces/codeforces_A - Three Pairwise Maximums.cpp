#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;

		if(a==b && b==c && a==c)
		{
			cout<<"YES"<<endl;
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
		if(a==b && b!=c)
		{
			if(max(a,c)==a)
			{
				cout<<"YES"<<endl;
				cout<<a<<" "<<1<<" "<<c<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else if(a==c && b!=a)
		{
			if(max(a,b)==a)
			{
				cout<<"YES"<<endl;
				cout<<a<<" "<<1<<" "<<b<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else if(b==c && c!=a)
		{
			if(max(b,a)==b)
			{
				cout<<"YES"<<endl;
				cout<<b<<" "<<1<<" "<<a<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else if(a!=b && b!=c && a!=c)
		{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}