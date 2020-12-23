#include<bits/stdc++.h>
using namespace std;
#define m 32
bool xsymmetric(int n,int a[m][m])
{
	int l=0;
	int r=n-1;
	while(l<r)
	{
		for(int i=0;i<n;i++)
		{
			if(a[l][i]!=a[r][i])
			{
				return false;
			}
			l++;
			r--;
		}
	}
	return true;
}
bool ysymmetric(int n,int a[m][m])
{
	int l=0,r=n-1;
	while(l<r)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i][l]!=a[i][l])
			{
				return false;
			}
		}
		l++;
		r--;
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[m][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		if(xsymmetric(n,a) && ysymmetric(n,a))
		{
			cout<<"YES"<<endl;
		}		
		else
		{
			cout<<"NO"<<endl;
		}
		
		
	}
	return 0;
}
