#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r,incr=0;
		cin>>n>>r;
		cout<<"n="<<n<<" "<<"r="<<r<<endl;
		int ans=n%r;
		cout<<ans;
		if(ans>r)
		{
			cout<<n-ans<<endl;
		}
		else
		{
			cout<<r-ans<<endl;
		}
		
	}
	return 0;
}
