#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int count=0;
        for(int i=5;n/i>=1;i*=5)
        {
            count+=n/i;
        }
        cout<<count<<endl;
    }

}