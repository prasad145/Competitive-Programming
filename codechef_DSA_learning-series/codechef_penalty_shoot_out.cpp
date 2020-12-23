#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int a,b,count1,count2;
        a=b=n,count1=count2=0;
        string s;
        cin>>s;
        for(i=0;i<2*n;i++)
        {
            if(i%2==0)
            {
                a--;
                if(s[i]=='1')
                {
                    count1++;
                }
            }
            else
            {
                b--;
                if(s[i]=='1')
                {
                    count2++;
                }
            }

            if((count1-count2)>b || (count2-count1)>a)
            {
                break;
            }

        }
        if(i==2*n)
        {
            cout<<i<<endl;
        }
        else
        {
            cout<<i+1<<endl;
        }
    }
    return 0;
}