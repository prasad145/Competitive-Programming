#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		vector<pair<char,char>> vv;
		long long i,j,count=0;
		string s;
		cin>>s;
		for( i=0;i<s.size();i++)
		{
			//for(j=)
			if((s[i]=='x'&& s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x'))
			{
				//vv.push_back({i,i+1});
				i++;	
				count++;
				
			}
		}
		cout<<count<<endl;
	}
	 return 0;
}