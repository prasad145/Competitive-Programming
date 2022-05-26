#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n, x, y;
	    cin >> n >> x >> y;
	    
	    int a[n];
	    int sumWODiscount = 0;
	    int sumWDiscount = x;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	        if(a[i] > y)
	            sumWDiscount += (a[i] - y); 
	        
	        sumWODiscount += a[i];
	    }
	    
	    if(sumWDiscount < sumWODiscount)
	    {
	        cout << "COUPON" << "\n";
	    }
	    else
	    {
	        cout << "NO COUPON" << "\n";
	    }
	}
	return 0;
}
