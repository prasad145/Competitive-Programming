#include<bits/stdc++.h>
#define ll long long

#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	stack<char> s1,s2;
	string s;
	cin>>s;
	int n=s.length(); 
	for(int i=1;i<=n;i++)
	{
		if(s1.empty())
		{
			s1.push(s[i]);
		}
		else
		{
			if(s1.top()==s[i])
			{
				s1.pop();
			}
			else
			{
				s1.push(s[i]);
			}
		}
	}
	while(!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
	}
	if(s2.empty())
	{
		cout<<"Empty String"<<endl;
	}
	else
	{
		while(!s2.empty())
		{
			cout<<s2.top();
			s2.pop();
		}
		
	}
	
}
