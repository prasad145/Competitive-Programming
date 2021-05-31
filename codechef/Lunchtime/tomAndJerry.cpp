#include<iostream>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d, k;
        cin >> a >> b >> c  >> d >> k;
        int mini = abs(a - c) + abs(b - d);
        if(mini % 2 == 0)
        {   
            if((k >= mini) && ((k % 2) == 0)){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else{
            if((k >= mini) && ((k % 2) != 0)){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}