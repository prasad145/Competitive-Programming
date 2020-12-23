#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long k,d0,d1;
        cin>>k>>d0>>d1;
        long long lastDigit=(d0+d1)%10;
        long long sum=d0+d1+lastDigit;

        if(k==2)
        {
            if((d0*10+d1)%3==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            continue;
        }

        long long remDigits=k-3;
        while(remDigits>0)
        {
            if(lastDigit==6)
            {
                long long sets=remDigits/4;
                sum+=20*sets;
                remDigits-=sets*4;
                
                if(remDigits==1)
                {
                    sum+=2;
                }
                else if(remDigits==2)
                {
                    sum+=6;
                }
                else if(remDigits==3)
                {
                    sum+=14;
                }
              //  remDigits=0;
               break;
            }
            else if(lastDigit==0)
            {
                remDigits=0;
                break;
            }
            else
            {
                lastDigit=(lastDigit*2)%10;
                sum+=lastDigit;
                remDigits--;
            }
            
        }
        if(sum%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
    }
}