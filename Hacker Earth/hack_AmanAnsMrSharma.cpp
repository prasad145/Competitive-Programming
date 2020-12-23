#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int count=0;
	while(t--)
	{
		int r,x;
		cin>>r>>x;
		if((2*((double)22/7)*r)<=100*x)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
