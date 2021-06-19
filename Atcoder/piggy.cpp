#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int i = 1, sum = 0;
	while(sum < t)
	{
		sum += i;
		i += 1;
	}

	cout << i - 1 << "\n";
	return 0;	
}