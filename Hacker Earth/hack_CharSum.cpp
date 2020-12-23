#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100];
	cin>>s;
	int count=0;
	size_t n=strlen(s);
	for(int i=0;i<n;i++)
	{
		int c=s[i]-96;
		count+=c;
	}
	cout<<count<<endl;
	return 0;
}
