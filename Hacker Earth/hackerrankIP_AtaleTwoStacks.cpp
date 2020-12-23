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
	ll t,n;
	char query;
	cin>>t;
	q q1;
	while(t--)
	{
		cin>>query;
		if(query=='1')
		{
			cin>>n;
			q1.push(n);
		}
		if(query=='2')
		{
			q1.pop();
		}
		if(query=='3')
		{
			cout<<q1.front()<<endl;
		}
		
		
	}
	
	return 0;
}
