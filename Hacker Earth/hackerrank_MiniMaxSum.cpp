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
	ll a[5];
	ll sum=0,min=0,max=0;
	for(ll i=0;i<5;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	min=sum-a[0];
	max=sum-a[4];
	if(min<max)
	{
		cout<<min<<" "<<max<<endl;
		}	
		else
		{
			cout<<max<<" "<<min<<endl;
		}
	
	
	return 0;
}
