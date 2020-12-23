#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a;
    float tot,amt;
    cin>>a;
    cin>>tot;
    if(a%5==0 && a+0.5<=tot)
    {
        amt=tot-a-0.50;
        cout<<amt<<endl;
    }
    else
    {
        cout<<tot<<endl;
    }
    
    
    return 0;
}