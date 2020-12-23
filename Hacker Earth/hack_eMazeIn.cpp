#include<bits/stdc++.h>
using namespace std;
#define max 999
int main()
{
	char a[max];
 	int c=0,d=0;
	cin>>a;
	int n=strlen(a);
//	cout<<n;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='L')
			c=c-1;
		else
		if(a[i]=='R')
			c+=1;
		else
		if(a[i]=='U')
			d+=1;
		else
			d-=1;
	}
	cout<<c<<" "<<d;
	return 0;
	
}
