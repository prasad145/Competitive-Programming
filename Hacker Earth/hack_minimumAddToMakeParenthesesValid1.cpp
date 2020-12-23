#include<bits/stdc++.h>
#define ll long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	stack<char> st;
	string s;
	cin>>s;
	//int n=s.length();
	//char l=s[0];
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(')
		{
			st.push(s[i]);
		}
		else if(s[i]==')')
		{
			if(st.size()==0)
			{
				st.push(s[i]);
			}
			else 
			{
				if(st.top()=='(')
				st.pop();
			else
			{
				st.push(s[i]);
			}
			}
		}
	}
	
	
	cout<<st.size()<<endl;
	return 0;
}
