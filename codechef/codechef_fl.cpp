#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,s,s1=0;
	//string s1; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		s=n%10;
		while(n!=0)
		{
			s1=n%10;
			n/=10;
		}
		cout<<s+s1<<endl;		
	}
	return 0;
}
