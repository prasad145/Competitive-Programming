#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int charge, coupan_amt;
        cin >> charge >> coupan_amt;

        int a , b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        int actual = 0, expected = 0;

        int tot1 = a + b + c;
        int tot2 = d + e + f;
 
        actual = tot1 + tot2 + (2 * (charge));

        if(tot1 < 150){
            tot1 += charge;
        }
        if(tot2 < 150){
            tot2 += charge;
        }

        expected = tot1 + tot2 + coupan_amt;

        if(expected < actual)
        {
            cout << "YES" << "\n";
        } 
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}