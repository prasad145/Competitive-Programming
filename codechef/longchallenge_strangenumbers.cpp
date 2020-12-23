#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std;
int strange(int x,int k)
{
    int count=0;
    while(x%2==0)
    {
        count+=1;
        if(count>k)
        {
            return 1;
        }
        x/=2;
    }
    int i;
    for(int i=3;i<=sqrt(x);i+=2)
    {
        while(x%i==0)
        {
            count+=1;
            if(count>k)
            {
                return 1;
            }
            x/=i;
        }

    }
    if(x>2)
    {
        count+=1;
    }
    if(count>k)
    {
        return 1;
    }
}
int main()
{
    int x,k,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        cout<<strange(x,k)<<endl;
        
    }
    return 0;
}