#include<bits/stdc++.h>
#define ll long long
#define st stack<char>
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
	while(t--)
	{
		string ss;
		cin>>ss;
		st s1;
		ll n=ss.length();
		for(ll i=0;i<n;i++)
		{
			switch(ss[i])
			{
				case '(':{  
							 s1.push(ss[i]);
							
							break;
							}
				case '[': {s1.push(ss[i]);
					break;
				}
				case '{':{  
							 s1.push(ss[i]);
							
							break;
						}
				case ')':{
					if(s1.top()=='(') {
					s1.pop();
					break;
					}
				
					
				}
				case '}':{
					if(s1.top()=='{') {
					s1.pop();
					break;
					}
					
				
				}
				case ']':{
					if(s1.top()=='[') {
					s1.pop();
					break;
					}
				
				}
				          
				         
			}
		}
				
		if(!s1.empty())
		{
			cout<<"N0"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
		
		
	}
	
	return 0;
}
