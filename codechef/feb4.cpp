#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> weight, jumps, position;
        int e;
        
        for(int i = 0; i < n; i++)
        {
            cin >> e;
            weight.push_back(e);
            position.push_back(e);
        }
        
        for(int i = 0; i < n; i++)
        {
            cin >> e;
            jumps.push_back(e);
        } 

        sort(position.begin(), position.end());

        int totHits = 0, curIndex, prevIndex;
        prevIndex = find(weight.begin(), weight.end(), position[0]) - weight.begin();
      //  cout << "previous index" << prevIndex  << "\n";
        for(int i = 1; i < position.size(); i++)
        {
            curIndex = find(weight.begin(), weight.end(), position[i]) - weight.begin();
            int ref = curIndex;
       //     cout <<"current index" << curIndex << "\n";
            while(prevIndex >= curIndex)
            {
          //      cout << "i values" << i << "\n";
                curIndex = curIndex + jumps[ref];
         //       cout << "moving index" << jumps[i]<<" "<<curIndex << "\n";
                totHits++;
         ///       cout << "hits -->" << totHits << "\n";
            }
            prevIndex = curIndex;
        //    cout << "changed previous index -->" << prevIndex <<"\n";
        }
        cout << totHits << "\n";
    }
        return 0;
}