#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        std::vector<int> wall;
        
        int n,e;
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>e;
            wall.emplace_back(e);
        }
        sort(wall.begin(),wall.end());
        int q;
        cin>>q;
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            int key=a+b;
            int ans=lower_bound(wall.begin(),wall.end(),key)-wall.begin();
            if(binary_search(wall.begin(),wall.end(),key))
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}