#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		stack<char> st;
		st.push('@');
		string s;
		cin>>s;
		int m=s.length();
		for(int i=0;i<m;i++)
		{
			
			
			if(s[i]=='{'||s[i]=='['||s[i]=='(')
			{
				st.push(s[i]);
				continue;
			}
			if(!st.empty())
			{
				if(s[i]==')')
				{
					char c=st.top();
					if(c=='(')
					{
						st.pop();
					}
				}
				else
				if(s[i]==']')
				{
					char c=st.top();
					if(c=='[')
					{
						st.pop();
					}
				}
				else
				{
					char c=st.top();
					if(c=='{')
					{
						st.pop();
					}
				}
			}
			else
			{
				cout<<"NO"<<endl;
			}
            
		}
		if(st.top()=='@') cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
 	}
 	return 0;
 	
}
