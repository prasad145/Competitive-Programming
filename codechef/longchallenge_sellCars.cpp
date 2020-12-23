#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
#define ll long long 
//int summ(int ,int );
/*
int sortt(int ,int );
int summ(int a[],int n)
{
    int sum=0;
    //sum+=sortt(a,n-1);
    return sum+sortt(a,n-1);
}
int sortt(int a[],int n)
{
    int sum1;
    sort(a,a+n);
    sum1=a[n-1];
    return sum1;
}
*/
int main()
{
    int t,n,sum=0,ans=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //while(n!=0)
        //{
        sort(a,a+n);
        
       // cout<<sum<<endl;
        int x=1;
        for(int i=n-1;i>=0;i--)
        {
            ans+=max(0,a[i]-(n-1-i));

        }
    }

        cout<<ans%1000000007<<endl;

 //       cout<<summ(a,n)<<endl;}
    return 0;
}