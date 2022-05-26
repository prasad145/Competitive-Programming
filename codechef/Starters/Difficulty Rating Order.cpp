#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n];
	    bool ok = false;
	    cin >> a[0];
	    for(int i = 1; i < n; i++)
	    {
	        cin >> a[i];
	        if(a[i] < a[i - 1])
	        {
	            ok = true;
	        }
	    }
	   string ans = (ok) ? "No" : "Yes";
	   cout << ans << "\n";
	}
	return 0;
}
