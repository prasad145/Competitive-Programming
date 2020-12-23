#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		vector<int> v;
		for(int i=0;i<5;++i)
		{
			cin>>a;
			v.push_back(a);
		}
		int p,sum=0;
		cin>>p;
		for(int i=0;i<5;++i)
		{
			sum+=(v[i]*p);
		}
		if((sum/5)<=24) cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
	return 0;
}
