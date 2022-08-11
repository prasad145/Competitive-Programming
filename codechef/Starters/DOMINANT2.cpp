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
        map<int, int> m, o;
        priority_queue<int> pq;
        while(n--)
        {
            int e;
            cin >> e;
            m[e]++;
        }
        int maxi = INT_MIN;
        for(auto x: m)
        {
            pq.push(x.second);
        }
        if(pq.size() == 1)
        {
            cout << "YES" << "\n";
            continue;
        }
        int firstMax = pq.top();
        pq.pop();
        int secondMax = pq.top();
        if(firstMax != secondMax)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}
