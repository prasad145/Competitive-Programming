
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(maxi<a[i])
            {
                maxi=a[i];
            }
        }
        //cout<<maxi<<endl; 
        if(x>=maxi)
        {
            cout<<n<<endl;
        }
        else
        {
            sort(a,a+n);
            int tot_days=0,i=0,cured=0;
            while(i<n)
            {
                if(x<a[i])
                {
                    tot_days+=1;
                    x*=2;
                }
                else 
                if(a[i]*2>=x)
                {
                    tot_days+=1;
                    x=a[i]*2;
                    a[i]=0;
                    i+=1;
                }
                else
                {
                    i+=1;
                }
            }
            int m=sizeof(a)/sizeof(a[0]);
            for(int i=0;i<m;i++)
            {
                if(a[i]>0)
                {
                    cured++;
                }
            }
            int ans=cured+tot_days;
            cout<<ans<<endl;
        }
    }
}