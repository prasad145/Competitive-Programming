#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	stack<int> s;
	queue<int> q;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		s.push(m);
		q.push(m);
	}
	while(!q.empty() && !s.empty())
	{
		if(q.front()>s.top())
		{
			cout<<1<<" ";
			s.pop();
		}
		else if(q.front()<s.top())
		{
			cout<<2<<" ";
			q.pop();
		}
		else if(q.front()==s.top())
		{
			cout<<0<<" ";
			s.pop();
			q.pop();
		}
	}
	cout<<endl;
	return 0;
}
