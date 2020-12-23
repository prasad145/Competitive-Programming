#include<bits/stdc++.h>
#define st stack<int>
#define v vector<int>
#define s set<int>
#define p pair<int,int>
#define mp map<char,int>
#define us unordered_set<int>
#define pq priority_queue<int>
#define q queue<int>
#define pb push_back
#define pf push_front
#define ll long long
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	ull t;
	st s1;
	cin>>t;
	ull a[t];
	for(ull i=0;i<t;i++)
	{
		cin>>a[i];
	}
	for(ull i=0;i<t;i++){
	
		while(!s1.empty() && s1.top()>=a[i])
		{
			s1.pop();
		}
		if(s1.empty())
		{
			cout<<-1<<" ";
		}
		else
		{
			cout<<s1.top()<<" ";
		}
		s1.push(a[i]);
	}
		return 0;
}
