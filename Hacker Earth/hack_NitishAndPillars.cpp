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
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	ull t,a;
	cin>>t;
	v vt;
	for(ull i=0;i<t;i++)
	{
		cin>>a;
		vt.pb(a);
	}
	ull k;
	cin>>k;
	
	while(k--)
	{
		ull l,r;cin>>l>>r;
		st s1;
		//ull count=1;
		for(ull i=l;i<=r;i++)
		{
			if(s1.empty())
			{
				s1.push(vt[i]);
			}
			else
			{
				if(s1.top()<vt[i])
				{
					//count++;
					s1.push(vt[i]);
					
				}	
			}
		}
		cout<<s1.size()<<endl;
	}
	
	return 0;
}
