#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        set<int> ballons = {1, 2, 3, 4, 5, 6, 7};
        int n;
        cin >> n;
        int ans = -1;
        bool ok = true;
        for(int i = 1; i <= n; i++)
        {
            int e;
            cin >> e;
            if(ballons.size() == 0 && ok)
            {
                ans = i - 1;
                ok = false;
            }
            if(ballons.find(e) != ballons.end())
            {
                ballons.erase(e);
            }
        }
        if(ans == -1 && ballons.size() == 0)
        {
            cout << n << '\n';
        }
        else
        {
            cout << ans << "\n";
        }
    }
    return 0;
    
}