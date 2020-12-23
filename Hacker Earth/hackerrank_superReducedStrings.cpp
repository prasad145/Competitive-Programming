#include<bits/stdc++.h>
#define ull unsigned long long

#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	stack<char> st;
	string s;
	cin>>s;
	ull n=s.length();
	for(ull i=0;i<n;i++)
	{
		if(st.empty())
		{
			st.push(s[i]);
		}
		else if(s.top()==s[i-1])
		{
			
			st.pop();
		}
		else 
		{
			cout<<st.top();
			st.pop();
		}
	}
	
	return 0;
}
