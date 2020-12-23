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
		if(a>c &&a<b || a>b &&a<c)
			cout<<a<<"\n";
		else
		if(b>a &&b<c || b>c &&b<a)
			cout<<b<<"\n";
		else
		if(c>a &&c<b || c>b &&c<a)
			cout<<c<<"\n";
	}
	return 0;
}
