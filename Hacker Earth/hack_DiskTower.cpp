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
	ll t;
	cin>>t;
	ll a[t];
	pq pq1,pq2;
	for(ll i=0;i<t;i++)
	{
		cin>>a[i];
		pq1.push(a[i]);
	}
	for(ll i=0;i<t;i++)
	{
		if(a[i]==pq1.top())
		{
			cout<<a[i]<<" ";
			pq1.pop();
			while(!pq2.empty() && !pq1.empty())
			{
				if(pq2.top()==pq1.top())
				{
					cout<<pq2.top()<<" ";
					pq1.pop();
					pq2.pop();
				}
				else
				{
					break;
				}
			}
			cout<<endl;
			
		}
		else
		{
			cout<<endl;
			pq2.push(a[i]);
		}
	}
	
	
	return 0;
}
