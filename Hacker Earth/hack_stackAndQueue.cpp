#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin>>n>>k;
ll a[n],b[n];
for(int i=0;i<n;i++)
{cin>>a[i];}
for(int i=1;i<n;i++)
{a[i]=a[i]+a[i-1];b[i]=a[i];}
ll ans=0;
for(int i=0;i<k;i++)
{
ll temp=a[i]+b[n-1]-b[n-k+i];
ans=max(temp,ans);
}
cout<<ans<<endl;
}
