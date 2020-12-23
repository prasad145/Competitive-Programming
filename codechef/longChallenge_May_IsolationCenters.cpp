#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t,n,q,c,i,j,ans,count;
	cin>>t;
	char alpha[]="abcdefghijklmnopqrstuvwxyz";
	while(t--)
	{
		int freq[26]={};
		cin>>n>>q;
		char s[n];
		cin>>s;
		for(i=0;i<26;i++)
		{
			char a=alpha[i];
			count=0;
			for(j=0;j<n;j++)
			{
				if(s[j]==a)
				{
					count++;
				}
			}
			freq[i]=count;
		}
		while(q--)
		{
			ans=0;
			c=0;
			cin>>c;
			for(int i=0;i<26;i++)
			{
				if(freq[i]>c)
				{
					ans+=freq[i]-c;
				}
			}
			cout<<ans<<endl;
		}
		
	}
	return 0;
}
