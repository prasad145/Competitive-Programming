#include<iostream>
#include<cstring>
#include<math.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    long long int t,tot=0,max1=0;
    cin>>t;
    long long int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
  /*  int j=t;
    while(j!=1)
    {
        for(int i=0;i<j-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        j--;
    } */
   //
    sort(a,a+t);
    
   // cout<<endl;
    for(int i=0;i<t;i++)
    {
        tot=a[i]*(t-i);
       // cout<<tot<<endl;
        max1=max(max1,tot) ;
       // cout<<max1<<endl;
    }
    cout<<max1<<endl;
    return 0;
} 
