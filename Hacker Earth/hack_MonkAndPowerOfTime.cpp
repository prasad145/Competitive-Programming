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
	ll t,a,b,count=0;
	cin>>t;
	q q1,q2;
	for(ll i=0;i<t;i++)
	{
		cin>>a;
		q1.push(a);
		
	}
	for(ll int i=0;i<t;i++)
	{
		cin>>b;
		q2.push(b);
		
	}
	while(q1.size())
	{
		if(q1.front()==q2.front())
		{
			q1.pop();
			q2.pop();
		}
		else
		{
			while(q1.front()!=q2.front())
			{
				int c=q1.front();
				q1.pop();
				q1.push(c);
				count++;
			}
		}
	}
	
	cout<<count+t<<endl;
	
	return 0;
}
