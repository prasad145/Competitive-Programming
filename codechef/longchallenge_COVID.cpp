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
        int n,i,j;
        cin>>n;
        int a[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int minDist=INT_MAX;
        for(i=0;i<n;i++)
        {
             for(j=i+1;j<n;j++)
             {
                 if(a[i]==1 && a[j]==1 && minDist>abs(i-j))
                 {
                    minDist=abs(i-j);
                 }
             }
        }
//        cout<<minDist<<endl;

        if(minDist>=6)
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