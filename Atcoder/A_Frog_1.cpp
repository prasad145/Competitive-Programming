#include<bits/stdc++.h>
#define INF 1e9+7
#define int long long
using namespace std;
int32_t main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    vector<int> dp(n, INF);

    for(int i = 0; i < n ; i++)
    {
        cin >> h[i];
    }

    dp[0] = 0;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j <= i + 2; j++)
        {
            if(j < n)
                dp[j] = min(dp[j], dp[i] + abs(h[j] - h[i]));
        }
    }

    cout << dp[n - 1] <<"\n";
    return 0;
}