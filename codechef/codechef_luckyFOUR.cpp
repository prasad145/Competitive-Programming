#include<bits/stdc++.h>
#include<sstream>
#include<string>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		ostringstream str1;
		str1<<n;
		string s=str1.str();
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='4')
			{
				count++;
			}
		}
			
		cout<<count<<endl;
	}	
	return 0;
}
