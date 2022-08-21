#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        vector<int> v;
        multiset<int> a;
        for(int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            v.push_back(e);
            a.insert(e);
        }
        cout << "Case #" << k << ": ";
        for(int i = 0; i < n; i++)
        {
            a.erase(a.find(v[i]));
            auto it = a.upper_bound(v[i] * 2);
            if(it != a.begin())
            {
                it--;
                cout << *(it) << " ";
            }
            else
            {
                cout << -1 << " ";
            }
            a.insert(v[i]);
        }
        cout << "\n";
    }
} 
