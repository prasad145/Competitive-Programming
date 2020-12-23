#include<bits/stdc++.h>
#define ll long long

#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	int t;
	cin>>t;
	unsigned char a[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	int j=0;
	int maxi=a[j],ans=0;
	for(int i=1;i<t;i++)
	{
		if(a[j]<a[i])
		{
			maxi=maxi^a[i];
			cout<<maxi<<endl;
			ans=max(ans,maxi);
		}
		else
		{
			j++;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
