#include<iostream>
#include<vector>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int seasons;
        cin >> seasons;
        vector<int> intro_duration(seasons);
        for(int i = 0; i < seasons; i++)
        {
            int e;
            cin >> e;
            intro_duration[i] = e;
        }

      /*  for(int i = 0; i < intro_duration.size(); i++)
        {
            cout << intro_duration[i] << " ";
        }*/
        
       // cout << "\n";

        int tot_time = 0;

        for(int i = 0; i < seasons; i++)
        {
            int episodes;
            cin >> episodes;
            bool ok = true;
            for(int j = 0; j < episodes; j++)
            {
                int e;
                cin >> e;
                if(ok){
                    tot_time += (e);
                    ok = false;
                }
                else{
                    tot_time  += (e - intro_duration[i]);
                   // cout << " ---> "<< intro_duration[j] << "\n";
                }
            }
        }

        cout << tot_time  << "\n";
    }
    return 0;
}