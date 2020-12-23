#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<ll>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<char,ll>
#define us unordered_set<ll>
#define pq priority_queue<ll>
#define q queue<ll>
#define pb push_back
#define pf push_front
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	ll t,n;string s1;
	cin>>t;
	ll a[n+1]={0};
	while(t--)
	{
		cin>>n;
		cin>>s1;
		ll m=s1.length();
		for(ll i=0;i<m;i++)
		{
			ll count=0;
			for(ll j=i+1;j<m;j++)
			{
				if(s1[i]==s1[j])
				{
					count++;
				}
				a[j-1]=count;
				cout<<a[j-1]<<endl;	
			}
			
		}
		ll ans=0;
		for(ll i=0;i<m;i++)
		{
			ans+=a[i];
		}
		cout<<ans<<endl;
		
	}
	
	return 0;
}
