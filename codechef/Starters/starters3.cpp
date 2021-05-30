#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m , k;
        cin >> n >> m >> k;
        unordered_map<int, int> freq;
        while(k--)
        {
            int e;
            cin >> e;
            freq[e]++;
        }
        vector<int> res;
        for(auto i: freq)
        {
            if(i.first < n + 1 && i.second > 1)
            {
                res.push_back(i.first);
            }
        }
        sort(res.begin(), res.end());
        cout << res.size() << " ";
        for(int  i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}