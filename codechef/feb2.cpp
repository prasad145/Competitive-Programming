#include<bits/stdc++.h>
using namespace std;
#using int long long int
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        while(n--)
        {
            int e;
            cin >> e;
            v.push_back(e);
        }
        sort(v.begin(), v.end());

        cout << abs(v[0] - v[1]) + abs(v[1] - v[v.size() - 1]) + abs(v[0] - v[v.size() - 1]) << "\n";
    }
    return 0;
}