#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        priority_queue<int> optimum;
        for(int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            optimum.push(e);
        }
        // sort(a.begin(), a.end());
        int first = 0, second = 0;
        while(k--){
            first += (optimum.top());
            optimum.pop();
            second += (optimum.top());
            optimum.pop();
        }
        second += (optimum.top());
        cout << max(first, second) << "\n";
    }
    return 0;
}