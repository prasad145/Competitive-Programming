#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	int a[n],sum=0,t=-1,min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if((sum-a[i])%7==0 && a[i]<min)
		{
			t=i;
			min=a[i];
		}
	}
	if(t>=0)
	{
		cout<<t<<endl;
	}
	else
	{
		cout<<"-1"<<endl;
	}
	return 0;
}
