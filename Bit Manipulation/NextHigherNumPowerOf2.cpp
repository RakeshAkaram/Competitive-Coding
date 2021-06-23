#include<bits/stdc++.h>
using namespace std;

/* Using Right Shift to find the number of bits till last 1. 
* Later those many times we left shift 1 to get the Next Higher Number power of 2
* Time Complexity - O(logn)
*/
int solveRightShift(int x)
{
	int count=0;
	while(x!=0)
	{
		count++;
		x=x>>1;
	}
	return 1<<count;
}

/* If n is power of 2, then n-1 will give all ones. On AND n-1 and n we get all zeros.
* Time Complexity - O(1)
*/
int solve(int x)
{
	int k=log2(x)+1;
	return 1<<k;
}
int main()
{
	int n=6;
	cout<<solve(n)<<endl;
	cout<<solveRightShift(n)<<endl;
	return 0;
}