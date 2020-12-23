#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int max=0,sum=0;
        cin>>n;
        int s[n],p[n],v[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i]>>p[i]>>v[i];
            cout<<s[i]<<"\t"<<p[i]<<"\t"<<v[i]<<endl;
            sum=((p[i]/(s[i]+1))*v[i]);
            cout<<sum<<endl;
            if(max<sum)
            {
                max=sum;
                cout<<max<<endl;
            }
        }
        cout<<max<<endl;
        
        
       
    }

    return 0;
}