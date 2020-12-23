#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	int cs1=0,cs2=0;
	int m=0,f=0;
	while(t--)
	{
		int p1,p2;
		cin>>p1>>p2;
		cs1=cs1+p1;
		cs2=cs2+p2;
		
		int d=abs(cs1-cs2);
		if(d>m)
		{
			m=d;
			if(cs1>cs2)
				f=1;
			else
				f=2;
		}		
	}
	cout<<f<<" "<<m<<endl;
}
