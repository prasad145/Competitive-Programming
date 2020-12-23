#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=10,ans=0,sum=0;
	cin>>n;
	while(n>0)
	{
		sum=n%10;
		ans+=(sum*i);
		n/=10;
		i--;
	}
	//cout<<ans<<endl;
	if(ans%11==0)
	{
		cout<<"Legal ISBN"<<endl;
	}
	else
	{
		cout<<"Illegal ISBN"<<endl;
	}
	return 0;
}
