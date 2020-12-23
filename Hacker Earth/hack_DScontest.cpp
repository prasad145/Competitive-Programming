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
	ull t,a;
	cin>>t;
	v v1;
	st s1;
	ull count=1,popcount=0;
	for(ull i=0;i<t;i++)
	{
		cin>>a;
		v1.pb(a);
	
	
		if(s1.empty())
		{
			s1.push(v1[i]);
			
		}
		else
		{
			if(s1.top()<=v1[i])
			{
				s1.push(v1[i]);
				///count++;
			}
			else
			{
				
				if(popcount<1){
					s1.pop();
					s1.push(v1[i]);
					popcount++;
					
				}
				else
				{
					
				}
			}
		}
	}
	
	cout<<s1.size()<<endl;
	
	
	
	return 0;
}
