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
        
        if(n < 5)
        {
            cout << n << "\n";
        }
        else
        {
            cout << n - (n / 5) << "\n";
        }
    }
    return 0;
}
