#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r,k,count=0;
	cin>>l>>r>>k;
	int i;
	for(int i=l;i<=r;i++)
	{
		if(i%k==0)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
//29918
