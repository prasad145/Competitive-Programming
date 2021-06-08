#include<iostream>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin >> n;
    cout << n << " ";
    while(n > 1)
    {
        if(n & 1)
        {
            n = (n * 3) + 1;
            cout << n << " ";
        }
        else
        {
            n = n >> 1;
            cout << n << " ";
        }
    }
    cout << "\n";
    return 0;
}