#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int cnt = 0;
        string ans = "";
        while(a--){
            string s;
            cin >> s;
            int full = 0, partial = 0, unsolved = 0;
            for(int i = 0; i < b; i++)
            {
                if(s[i] == 'F'){
                    full++;
                }
                else if(s[i] == 'U'){
                    unsolved++;
                }
                else{
                    partial++;
                }
            }
            if((x <= full) || ((x - 1) <= full) && (y <= partial)){
                ans += '1';   
            }
            else{
                ans += '0';
            }
         }
         cout << ans << "\n";
    }
    return 0;
}