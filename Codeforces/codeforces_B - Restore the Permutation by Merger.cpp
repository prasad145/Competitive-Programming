#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> per;
		int n,e;
		cin>>n;
		n=n*2;
		while(n--)
		{
			cin>>e;
			int cnt = count(per.begin(), per.end(), e);
			if(cnt==0)
			{
				per.push_back(e);
			}
		}
		for(auto it=per.begin();it!=per.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
	return 0;
}