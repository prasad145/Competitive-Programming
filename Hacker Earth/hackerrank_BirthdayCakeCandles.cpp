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
	ll t,a,count=0;
	pq p1;
	q q1;
	cin>>t;
	while(t--)
	{
		cin>>a;
		p1.push(a);
		q1.push(a);
	}
	ll k=p1.top();
	while(!q1.empty())
	{
		if(q1.front()==k)
		{
			count++;
			q1.pop();
		}
		else
		{
			q1.pop();
		}
	}
	cout<<count<<endl;
	return 0;
}
