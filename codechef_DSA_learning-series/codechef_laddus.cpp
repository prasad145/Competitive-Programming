#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t,count=0,n;
    long long int p;
    cin>>t;
    string s,org;
    while(t--)
    {
        cin>>n>>org;
        count=0;
        while(n--)
        {
            cin>>s;
            if(s=="CONTEST_WON")
            {
                cin>>p;
                count+=300;
                if(p<=20)
                {
                    count+=(20-p);

                }
            }
            else if(s=="TOP_CONTRIBUTOR")
                count+=300;
            else if(s=="BUG_FOUND")
            {
                cin>>p;
                count+=p;
            }
            else
                count+=50;

        }
        if(org=="INDIAN")
            cout<<count/200<<endl;
        else
            cout<<count/400<<endl;    
    }
return 0;
}
