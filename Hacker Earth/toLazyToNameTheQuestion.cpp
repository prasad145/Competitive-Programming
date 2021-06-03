#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	int a, b, k;
	cin >> a >> b >> k;
	set<int> multiples;
	// set<int> :: iterator it;
	int i = 1;
	while(true)
	{
		multiples.insert(a * i);
		if(multiples.size() == k)
			break;
		multiples.insert(b * i);
		if(multiples.size() == k)
			break;
		i += 1;
	}

	int it = *multiples.end() - 1; 
	
	// cout <<multiples.size() << " "<< it << "\n";
	return 0;
}