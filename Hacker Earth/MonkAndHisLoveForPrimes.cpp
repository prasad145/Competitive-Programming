#include<iostream>
using namespace std;
bool is_prime(int n)
{
	// bool ok = true;
	for(int i = 2; i * i <= n; i++)
		if(n % i == 0)
			return false;
	return true;
}
int main()
{
	string s;
	cin >> s;
	int total = 0;
	for(int i = 0; i < s.length(); i++)
	{
		int cc, bit = s[i];
		if(isupper(bit))
		{
			cc = bit + 32;
			total -= cc;
		}
		else
		{
			cc =  bit - 32;
			total += cc;
		}
		//int num = (int)cc;

	}
	
	if(is_prime(abs(total)))
		cout << "1" << "\n";
	else
		cout << "0" << "\n";
	return 0;
}