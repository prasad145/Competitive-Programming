#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        std::string p, output = "";
        std::getline(std::cin >> std::ws, p);
        int tt;
        cin >> tt;
        int h = (int) p[0] - 48;
        int H = (int) p[1] - 48;
        int hour = (h * 10) + H;
        int m = (int) p[3] - 48;
        int M = (int) p[4] - 48;
        int minute = m * 10 + M;
        
        char c = p[6];
    
        if(c == 'P')
        { 
            if(hour != 12)
                hour = hour + 12;
        }   
        else
        {
            if(hour == 12 && minute >= 0)
                hour = 12 - hour;
        }
        int time = (hour * 100) + (m * 10) +  (M);
      //  cout << time << "\n";

        while(tt--){
            std::string duration;
            std::getline(std::cin >> std::ws, duration);
            
            int start_h = (int) duration[0] - 48;
            int start_H = (int) duration[1] - 48;
            int start_hour = (start_h * 10) + start_H;
            int start_m = (int) duration[3] - 48;
            int start_M = (int) duration[4] - 48;
            char start_c = duration[6];
            int start_minute = (start_m * 10) + start_M;
          
            int end_h = (int) duration[9] - 48;
            int end_H = (int) duration[10] - 48;
            int end_hour = (end_h * 10) + end_H;
            int end_m = (int) duration[12] - 48;
            int end_M = (int) duration[13] - 48;
            char end_c = duration[15];
            int end_minute = (end_m * 10) + end_M;
            
            if(start_c == 'P')
            {
                if(start_hour != 12)
                {
                    start_hour = start_hour + 12;
                }
            }
            else
            {
                if(start_hour == 12 && start_minute >= 0)
                {
                    start_hour = 12 - start_hour;
                }
            }

            if(end_c == 'P')
            {
                if(end_hour != 12)
                    end_hour += 12;
            }            
            else
            {
                if(end_hour == 12 && end_minute>= 0)
                {
                    end_hour = 12 - end_hour;
                }
            }


            int start = (start_hour * 100) + (start_m * 10) + start_M;
            int end = (end_hour * 100) + (end_m * 10) + end_M;
            //cout << start << " " << end;

                if(time <= end && time >= start)
                {
                     output += '1';
                }
                else{
                    output += '0';
                }
            
           
        }
        cout << output << "\n";
    }
    return 0;
}