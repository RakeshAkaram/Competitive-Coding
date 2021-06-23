#include<bits/stdc++.h>
using namespace std;

/* Also called as Counting of set bits
*  Technique: Using RSBM and iterating over it such that it avoids
* Checking of each and every bit.
* Time Complexity: O(logn) -> worst case
* Used in Fenwick Tree
*/
int solve_rsbm(int x)
{
	int count=0;
	while(x!=0)
	{
		int rsbm= x & -x;
		x=x-rsbm;
		count++;
	}
	return count;
}

/* using Mod and divide 2
* Time Complexity - O(logn)
*/
int solveMod2(int x)
{
	int count=0;
	while(x!=0)
	{
		if(x%2==1) count++;
		x=x/2;
	}
	return count;
}

/* Using right shift and AND with 1
* Time Complexity : O(logn)
*/
int solveByAnd(int x)
{
	int count=0;
	while(x!=0)
	{
		if(x&1==1) count++;
		x=x>>1;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int x=76;
	
	cout<< "Count of Set bits:"<<solve_rsbm(x)<<endl;
	
	cout<< "Count of Set bits:"<<solveMod2(x)<<endl;

	cout<< "Count of Set bits:"<<solveByAnd(x);
	return 0;
}