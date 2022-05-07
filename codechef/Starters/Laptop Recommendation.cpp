#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> mp;
        while(n--)
        {
            int e;
            cin >> e;
            mp[e]++;
        }
        vector<pair<int, int>> vp;
        for(auto ele: mp)
        {
            vp.push_back({ele.second, ele.first});
        }
        sort(vp.begin(), vp.end());
        if(vp[vp.size() - 1].first == vp[vp.size() - 2].first)
        {
            cout << "CONFUSED" << "\n";
        }
        else
        {
            cout << vp[vp.size() - 1].second << "\n";
        }
    }
    return 0;
}
