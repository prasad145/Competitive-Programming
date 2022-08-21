#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        if(n == 1)
        {
            cout << "Case #" << i << ": " << 1 << "\n";
        }
        else
        {
            cout << "Case #" << i << ": " << (n / 5) + (n % 5 != 0) << "\n";
        }
    }
}
