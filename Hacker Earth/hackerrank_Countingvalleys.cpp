#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	int j=0,up=0,ans=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='U')
		{
			up++;
		}
		if(s[i]=='D')
		{
			up--;
		}
		if(up==0 && s[i]=='U')
		{
			ans++;
		}
	}	
	cout<<ans<<endl;
	return 0;
}
