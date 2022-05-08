#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        
        if(m == x)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << (n * x) / (x + 1) << "\n";
        }
    }
    return 0;
}
