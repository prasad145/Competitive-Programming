#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v64 vector<ll>
#define v32 vector<int>
#define vv32 vector<vector<int>>
#define s set<ll>
#define ms multiset<int>
#define p pair<ll,ll>
#define mp map<char,ll>
#define us unordered_set<ll>
#define pq64 priority_queue<ll>
#define pq32 priority_queue<ll>
#define q dequeue<ll>
#define pb push_back
#define eb emplace_back
#define fi first
#define ls last
#define forab(i,a,b) for(ll i=a;i<b;i++) 
#define forn(i,n) for(ll i=0;i<n;i++)
#define pf push_front
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MAX 1e6+2
using namespace std;
int is_prime[1000001];

void sieve()
{
	for(int i=0;i<MAX;i++)
	{
		is_prime[i]=1;
	}
	is_prime[0]=is_prime[1]=0;
	for(int i=2;i*i<=MAX;i++)
	{
		if(is_prime[i])
		{
			for(int j=i*i;j<=MAX;j+=i)
			{
				is_prime[j]=0;
			}
		}
	}
}
signed main()
{
	boost
	ll t;
	cin>>t;
	while(t--)
	{
		int n,e,flag=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>e;
			if(flag==0)
			{
				if(e%2==0)
				{
					flag=1;
				}
			}
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
