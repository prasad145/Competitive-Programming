#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int count=0;
	while(t--)
	{
		string s;
		cin>>s;
		if(s[0]=='+'&&s[1]=='+' || s[1]=='+'&&s[2]=='+')
		{
			count++;
		}
		else
		if(s[0]=='-'&&s[1]=='-' || s[1]=='-'&&s[2]=='-')
		{
			count--;
		}
		
	}
	//if(count<0)
	//	cout<<"0"<<endl;
	//else
		cout<<count<<endl;
		return 0;
	
//	s[0]=='-'&&s[1]=='-'
}

