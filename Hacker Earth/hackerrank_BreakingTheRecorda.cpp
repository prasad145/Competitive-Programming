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
	st s1;
	ll t,a,min=0,max=0,maxi,mini,b;
	cin>>t;
	cin>>a;
	maxi=a,mini=a;
	while(--t)
	{
		cin>>b;
		if(b>maxi)
		{
			maxi=b;
			max++;
		}
		if(b<mini)
		{
			mini=b;
			min++;
		}
	}
	cout<<max<<" "<<min<<endl;
	return 0;
}
