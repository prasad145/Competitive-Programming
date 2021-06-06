#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int D, d, p, q;
		cin >> D >> d >> p >> q;
		int days = D / d;
		int remDays = D % d;
		// cout << days << " " << remDays << "\n";
		int production, heist = 0;
		int i;
		// for(i = 0; i < days; i++)
		// {
		// 	production = (p + (i * q));
		// 	// cout << "Produced-->" << production << "\n";
		// 	heist += (production * d); 
		// 	// cout << "heist -> " << i << "th = " << heist << "\n";
		// }
		int tmp = days - 1;
		// cout << ((((tmp)*(tmp + 1))/2) * q) << "\n";
		heist = (days * p) + ((((tmp)*(tmp + 1))/2) * q);
		heist *= d;
		// cout << "-->" << heist << "\n";
		// cout << "for groups-->" << heist << "\n";
		// cout << i << "<--\n";
		if(remDays >= 1){
			// cout << "for remDays -->" << ((p + (i * q)) * remDays) << "\n";
			heist += ((p + ((days) * q)) * remDays);
			// cout << "for remDays -->" << heist << "\n";
		}
		cout << heist << "\n";
	}
	return 0;
}