#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll c,n;
		cin>>c>>n;
		ll ans=(n*(n+1))/2;
		ll m=c-ans;
		if(m>0)
		{
			cout<<m%n<<endl;
		}
		else
		{
			cout<<c<<endl;
		}
	}
	return 0;
}
