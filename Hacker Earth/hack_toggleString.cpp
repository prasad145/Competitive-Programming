#include<bits/stdc++.h>
using namespace std;
#define max 999
int main()
{
	int i=0,j=0,h;
	char s[101];
	cin>>s;
	h=strlen(s);
	for(i=0;i<h;i++)
	{
		if(s[j]>=97&&s[j]<=122)
			s[j]=s[j]-32;
		else
			s[j]=s[j]+32;
		j++;
	}	
	cout<<s;
	return 0;
}
