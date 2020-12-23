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
	q q1;
	while(t--)
	{
		char c;
		ll n;
		cin>>c;
		if(c=='E')
		{
			cin>>n;
			q1.push(n);
			cout<<q1.size()<<endl;
		}
		else if(c=='D')
		{
			if(q1.size()>0)
			{
				cout<<q1.front()<<" ";
				q1.pop();
				cout<<q1.size()<<endl;
			}
			else
			{
				cout<<-1<<" "<<q1.size()<<endl;
			}
		}
		
		
	}
	
	return 0;
}
