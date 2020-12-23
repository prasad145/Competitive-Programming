#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k,t,count=0;
    cin>>n>>k;

    while(n--)
    {
        cin>>t;
        if(t%k==0)
        {
            count++;
        }

    }
    cout<<count<<endl;
    
    return 0;
}