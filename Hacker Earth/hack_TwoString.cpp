#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		char s1[100000],s2[100000];
		cin>>s1;
		cin>>s2;
		size_t k=strlen(s1);
		size_t l=strlen(s2);
		int flag=1;
		if(k!=l)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			sort(s1,s1+k);
			sort(s2,s2+k);
			for(int i=0;i<k;i++)
			{
				if(s1[i]!=s2[i])
				{
					flag=0;
					break;
				}

			}
				
			
		}
		//cout<<count<<endl;
		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
