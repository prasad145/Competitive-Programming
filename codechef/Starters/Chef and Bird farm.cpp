#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if(z % x == 0 && z % y == 0)
        {
            cout << "ANY" << "\n";
        }
        else if(z % x != 0 && z % y != 0)
        {
            cout << "NONE" << "\n";
        }
        else if(z % x == 0)
        {
            cout << "CHICKEN" << "\n";
        }
        else if(z % y == 0)
        {
            cout << "DUCK" << "\n";
        }
    }
}
