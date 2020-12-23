#include<bits/stdc++.h>
using namespace std;
int main()
{
stack<int>s;
int n;cin>>n;
int a[n],res[n];
for(int i=0;i<n;i++)
cin>>a[i];
res[0]=-1;
s.push(a[0]);
for(int i=0;i<n;i++)
{
while(!s.empty()&&s.top()>=a[i])
s.pop();
if(s.empty())
{
res[i]=-1;
}
if(!s.empty()&&s.top()<a[i])
res[i]=s.top();
s.push(a[i]);
}
for(int i=0;i<n;i++)
cout<<res[i]<<" ";
}
