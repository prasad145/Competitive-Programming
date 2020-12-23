#include<iostream>
#include<set>
#include<unordered_set>
#define int long long int
#define us unordered_set<int>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
       	us f,l;
        int n,a,b;
        cin>>n;
        for(int i=0;i<((4*n)-1);i++)
        {
            cin>>a>>b;
            if(f.count(a))
            {
                f.erase(a);
            }
            else
            {
                f.insert(a);
            }
            if(l.count(b))
            {
                l.erase(b);
            }
            else
            {
                l.insert(b);
            }
        }

        cout<<(*(f.begin()))<<" "<<(*(l.begin()))<<endl;
    }
    return 0;
}