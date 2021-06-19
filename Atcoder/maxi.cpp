#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int ans = (int)(n * 1.08);
	// cout << ans  << "\n";
	if(ans == 206)
	{
		cout << "so-so" << "\n";
	}
	else
	{
		if(ans > 206)
		{
			cout << ":(" << '\n';
		}
		else
		{
			cout << "Yay!" << '\n';
		}
	}
	return 0;
}