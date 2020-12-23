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
	ll t,m;
	cin>>t;
	while(t--)
	{
		
		cin>>m;
		ll count=0;
		if(m<38)
		{
			cout<<m<<endl;
			
		}
		else
		{
			ll k=m;
			while(1)
			{
				
				m=m+1;
				count++;
				//cout<<m<<endl;
				if(m%5==0)
				{
					cout<<m<<endl;
					break;
				}
				else
				{
					if(count>=2)
					{
						cout<<k<<endl;
						break;
					}
				}
			
				
			}
		}
		
		
	}
	
	return 0;
}
