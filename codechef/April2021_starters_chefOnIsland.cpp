#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, xr, yr, d;
        cin >> x >> y >> xr >> yr >> d;
        double mini = (double)min((double)x / xr, (double)y / yr);  
        if(mini >= (double)d){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}