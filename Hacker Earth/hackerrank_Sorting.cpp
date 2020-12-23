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
/*int swap(ll a,ll b)
{
	ll temp=a;
	a=b;
	b=temp;
}*/
int main()
{
	boost;
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll count=0;
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				ll temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				count++;
			}
		}
		if(count==0)
		{
			break;
		}
	}
/*	for(ll i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;*/
	cout<<"Array is sorted in "<<count<<" swaps."<<endl;
	cout<<"First Element"<<":"<<a[0]<<endl;
	cout<<"Last Element:"<<a[n-1]<<endl;
	return 0;
}
