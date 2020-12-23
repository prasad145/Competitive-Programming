#include<bits/stdc++.h>
#define ll long long
#define st stack<char>
#define v vector<ll>
#define s set<ll>
#define p pair<ll,ll>
#define mp map<char,ll>
#define us unordered_set<ll>
#define pq priority_queue<ll>
#define q queue<char>
#define pb push_back
#define pf push_front
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	q q1;
	st s1;
	string ss;
	cin>>ss;
	ll n=ss.length(),count=0;
	for(ll i=0;i<n;i++)
	{
		q1.push(ss[i]);s1.push(ss[i]);
	}
	while(!q1.empty()&&!s1.empty())
	{
		//cout<<q1.front()<<" "<<s1.top()<<endl;
		if(q1.front()==s1.top())
		{
			q1.pop();
			s1.pop();
		}
		else
		{
			break;
		}
	}
	if(q1.empty()) cout<<"The word,"<<ss<<", is a palindrome."<<endl;
	else
	cout<<"The word,"<<ss<<", is not a palindrome."<<endl;
	return 0;
}
