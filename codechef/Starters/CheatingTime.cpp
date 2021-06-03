#include<iostream>
#include<vector>
#include<algorithm>
// #define int long long
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, f;
        cin >> n >> k >> f;
        vector<pair<int, int>> inv;
        while(n--){
            int a, b;
            cin >> a >> b;
            inv.push_back({a, b});
        }
        int totTime = 0;
        sort(inv.begin(), inv.end());
        int prev =0;
        for(int i = 0; i < inv.size(); i++){
            totTime += max(0, (inv[i].first - prev));
            prev = max(prev, inv[i].second);
        }
        totTime += max(0, f - prev);
        if(totTime >= k)
        {
            // cout << totTime << "\n";
            cout << "YES" << "\n";
        }
        else{
            // cout << totTime << "\n";
            cout << "NO" << "\n";
        }
    }
    return 0;
}