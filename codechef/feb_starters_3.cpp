#include<iostream>
#include<vector>
#include<algorithm>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            a[i] = e;  
        }

        sort(a.begin(), a.end());

        if((-1 * a[0]) > a[n-1]){
            cout << "yes" <<"\n";
            cout << (a[0] * a[1]) + (a[1] - a[0]) << "\n";
        }
        else
            cout << (a[n - 1] * a[n - 2]) + (a[n - 1] - a[n - 2]) << "\n";
    }
    return 0;
}