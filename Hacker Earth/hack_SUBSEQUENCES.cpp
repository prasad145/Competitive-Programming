#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		int count=0;
		for(int i=0;i<n;i++)
		{
			char temp[n-i+1];
			int temp_index=0;
			for(int j=i;j<n;j++)
			{
				temp[temp_index++]=s[j];
				temp[temp_index]='\0';
				for(int k=0;k<temp_index;k++)
				{
					if(temp[k]=='a'||temp[k]=='e'||temp[k]=='i'||temp[k]=='o'||temp[k]=='u'||temp[k]=='A'||temp[k]=='E'||temp[k]=='I'||temp[k]=='O'||temp[k]=='U')
					{
						count++;
					}
				}
			}
		}
		cout<<count<<endl;

	}
	return 0;
}
