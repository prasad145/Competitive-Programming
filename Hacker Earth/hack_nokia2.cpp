#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//char alpha[]="abcdefghijklmnopqrstuvwxyz";
	int freq[]= {0};
	while(n--)
	{
		char s[1002];
		cin>>s;
		int count=0;
		size_t m=strlen(s);
		for(int i=0;i<m;i++)
		{
			count=0;
			for(int j=i+1;j<m;j++)
			{
				if(s[i]==s[j])
				{
					count++;
				}
			}
			freq[i]=count;
			
		}
		for(int i=0;i<m;i++)
		{
			
			cout<<s[i]<<freq[i];
		}
	}
	return 0;

}
