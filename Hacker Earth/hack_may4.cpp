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
#define forn(i,n) for(ll i=0;i<n;i++)
#define pf push_front
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	ll t,n,k,sum=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		pq v1;
		for(ll i=1;i<=n;i++)
		{
			if(i%k!=0)
			{
				sum+=i;
			//continue;
			}
			else
			{
				for(ll j=i;j>=1;j--)
				{
					if(i%j==0)
					{
						if(j%k==0)
						{
							continue;
						}
						else
						{
							sum+=j;
						}
						/*cout<<j<<endl;
						v1.push(j);
						continue;*/
					}
					else
					{
						continue;
					}
				}
				/*while(!v1.empty())
				{
					if((v1.top()%k)!=0)
					{
						sum=sum+(v1.top());
						v1.pop();
					}
				}*/
		
			}
		}
		
		cout<<sum<<endl;	
		
		
	}
	
	return 0;
}
