#include<iostream>
using namespace std;
int main()
{
    int R, O, C;
    cin >> R >> O >> C;

    int overs = 20 - O;
    int maxi = overs * 6;

    maxi = C + (maxi * 6);
    
    (maxi > R) ? cout << "YES" : cout << "NO";
    return 0;
}