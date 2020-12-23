#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a[n],min1=INT_MAX,sum=0;
        cout<<min1<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            min1=min(min1,a[i]);
            //cout<<min1<<endl;
            sum+=min1;
        
        }
        
        cout<<sum<<endl;


    }
    return 0;
}