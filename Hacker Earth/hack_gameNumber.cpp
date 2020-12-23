#include<bits/stdc++.h>
using namespace std;
void nextGreater(int a[],int n,int next[],char order)
{
	stack<int> s;
	for(int i=n-1;i>=0;i--)
	{
		while(!s.empty() && ((order=='G')? a[s.top()]<=a[i]:a[s.top]>=s[i]))
			s.pop()
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	return 0;
}
