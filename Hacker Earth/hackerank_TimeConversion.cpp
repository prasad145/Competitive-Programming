#include<bits/stdc++.h>
#include<string>
#define ll long long
#define st stack<ll>
#define v vector<ll>
//#define s set<ll>
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
	char s[999];
	cin>>s;
	const char *c=s[0];
	const char *d=s[1];
	ll fi=atoi(c);
	ll se=atoi(d);
	ll k=(fi*10)+se;
	if(k<12)
	{
		k=k+12;
	}
	cout<<k;
	for(int i=2;i<=s.length()-2;i++)
	{
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}
