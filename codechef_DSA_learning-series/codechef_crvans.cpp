#include<iostream>
//#include<cstring>
using namespace std;
int main()
{
    long long  t;
    cin>>t;
    while(t--)
    {
        long long car;
        cin>>car;
        long long a[car],max,cnt=0;
        for(int i=0;i<car;i++)
        {
            cin>>a[i];
        }
        max=a[0];
        for(int i=0;i<car;i++)
        {
            if(a[i]<=max)
            {
                max=a[i];
                cnt++;        
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}