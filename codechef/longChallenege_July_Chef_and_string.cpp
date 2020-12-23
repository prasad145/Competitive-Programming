#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;cin>>n;
        int b;cin>>a;
        int sum=0;
        while(--n)
        {
            cin>>b;
            sum+=abs(abs(a-b)-1);
            a=b;
        }
        cout<<sum<<endl;
    }
    return 0;
}