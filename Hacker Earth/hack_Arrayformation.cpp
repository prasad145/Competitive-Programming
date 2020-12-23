#include<bits/stdc++.h>
#define ll long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
stack<int> st;
queue<int> qt;
bool checkPrime(int t)
{
	for(int i=2;i<=sqrt(t);i++)
	{
		if(t%i==0){
			return false;
		}
	}
	return true;
}
int isPrime(int a[],int m)
{
	for(int i=0;i<m;i++)
	{
		if(checkPrime(a[i])==true)
		{
			qt.push(a[i]);
		}
		else
		{
			st.push(a[i]);
		}
	}
}
int main()
{
	boost;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	isPrime(a,n);
	int l=qt.size();
	int s=st.size();
	for(int i=0;i<l;i++)
	{
		cout<<qt.front()<<" ";
		qt.pop();
	}
	cout<<endl;
	for(int i=0;i<s;i++)
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	
	return 0;
}
