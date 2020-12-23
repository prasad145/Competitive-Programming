
// C++ program to find the element 
// occurring odd number of times 
#include <bits/stdc++.h> 
using namespace std; 

// function to find the element 
// occurring odd number of times 
int Occurrence(int arr[],int sum,int size) 
{ 
	
	// Defining HashMap in C++ 
	unordered_map<int, int> hash; 

	// Putting all elements into the HashMap 
	for(int i = 0; i < size; i++) 
	{ 
		hash[arr[i]]++; 
	} 
	// Iterate through HashMap to check an element 
	// occurring odd number of times and return it 
	for(auto i : hash) 
	{ 
		if(i.second % 2 == 0) 
		{ 
			sum+=i.first; 
		} 
	} 
	return sum; 
} 

// Driver code 
int main() 
{ 
	
	int n ,sum=0;
	cin>>n; 
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	// Function calling 
	cout << Occurrence(arr,sum, n)<<endl; 

	return 0; 
} 

// This code is contributed by codeMan_d. 

