#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		string s;
		cin>>s;
		stack<int> s0,s1;
		int seq=1;
		int a[n];
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
				if(s1.empty())
				{
					s0.push(seq);
					a[i]=seq;
					seq++;
				}
				else
				{
					int k=s1.top();
					s1.pop();
					a[i]=k;
					s0.push(k);
				}
			}
			else
			{
				if(s0.empty())
				{
					s1.push(seq);
					a[i]=seq;
					seq++;
				}
				else
				{
					int k=s0.top();
					s0.pop();
					a[i]=k;
					s1.push(k);
				}
			}
		}
		cout<<seq-1<<endl;
		for(auto i:a)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}