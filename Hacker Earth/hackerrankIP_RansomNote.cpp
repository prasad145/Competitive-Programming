#include<bits/stdc++.h>
#define ll long long
#define st stack<ll>
#define v vector<string>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<string,ll>
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
	mp mp1,mp2;
	string ss;
	cin>>t>>n;
	ll count=0;
	v v1;
	for(int i=0;i<t;i++)
	{
		cin>>ss;
		mp1[ss]++;
		//
		
	}
	for(int i=0;i<n;i++)
	{
		cin>>ss;
		if(--mp1[ss]<0)
		{
			cout<<"No"<<endl;
			return 0;
		}
 	}
 	cout<<"Yes"<<endl;
 	
	
	
	return 0;
}
