#include<iostream>
using namespace std;
#define int long long int
int32_t main()
{
    int n, a;
    cin >> n;
    int sum = 0, summ = ((n) * (n + 1)) >> 1;
 
    while(--n)
    {
        cin >> a;
        sum += a; 
    }
 
    cout << summ - sum << "\n";
    return 0;
}