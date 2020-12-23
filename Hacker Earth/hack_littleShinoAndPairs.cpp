#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int v[n];
//	vector<int > v;
	set<pair<int , int> > s;
	for(int i=0;i<n;i++)
	{
		//int a;
		cin>>v[n];
	//	v.push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<=i+1;j++)
		{
			if(v[i]>v[j])
				s.insert(make_pair(v[i],v[j]));
			else if(v[i]<v[j])
				s.insert(make_pair(v[j],v[i]));
		}
	}
	cout<<s.size()<<endl;
	return 0;
}

