#include<bits/stdc++.h>
using namespace std;

/* 
* Time Complexity: O(n) -> Array size
*/
std::vector<int> solve(std::vector<int> nums)
{
	std::vector<int> result(2,0);
	int xorOutput=0;
	// 1. Finding the XOR of all elements
	for(auto val:nums)
		xorOutput^=val;
	
	// 2. Finding the Right Most Set Bit mask
	int rsbm=xorOutput&~(xorOutput-1);
	
	// 3. Used as to check the Kth bit in the split process of array
	int bit=log2(rsbm);

	for(auto val:nums)
	{
		cout<<val<<":"<<(val&(1<<bit))<<endl;
		val&(1<<bit)?result[0]^=val:result[1]^=val;
	}

	return result;
}

int main()
{
	std::vector<int> nums{18, 24, 24, 21, 10, 29, 8, 10, 29 ,18};
	
	std::vector<int> output= solve(nums);
	for(auto val:output)
		cout<<val<<endl;

	return 0;
}