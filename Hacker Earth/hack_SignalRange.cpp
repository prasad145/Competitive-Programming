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
	cin>>t;
	while(t--)
	{
		ull n,a;
		cin>>n;
		v v1;
		ull v2[n];
		st s1;
	   	s1.push(0);
		for(ull i=0;i<n;i++)
		{
			cin>>a;
			v1.pb(a);
		}
		v2[0]=1;
		cout<<1<<" ";
		for(ull i=1;i<n;i++)
		{
			while(!s1.empty() && v1[s1.top()]<=v1[i])
			{
				
				s1.pop();
				//cout<<s1.top()<<"<----"<<endl;
			}
			v2[i]=(s1.empty())? (i+1) : (i-s1.top());
			cout<<v2[i]<<" ";
			s1.push(i);
			//cout<<s1.top()<<"--->"<<endl;
		}
		/*int m=v2.size();
		for(ull i=0;i<n;i++)
		{
			cout<<v2[i]<<" ";
		}*/
		cout<<endl;		
	}
	
	return 0;
}
