#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<ll>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<ll,ll>
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
	ll t,n;
	
	
	cin>>t;
	ll a[t],mp1[t];
	for(ll i=0;i<t;i++)
	{
		cin>>a[i];
		mp1[a[i]]++;
	}
	ll max=0,maxpos=0;
	for(ll i=0;i<t;i++)
	{
		cout<<mp1[i]<<" ";
		/*if(mp1[i]>max)
		{
			max=mp1[i];
			maxpos=i;
		}*/
	}
	//cout<<max<<endl;
	return 0;
}
