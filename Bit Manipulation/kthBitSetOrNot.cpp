#include<bits/stdc++.h>
using namespace std;

/* Kth set bit set or not of a number.
* Use Left Shift to reach the Kth bit and Apply AND operation
* Time Complexity: O(logn) -> As number of bits is represented by Log(n).
*/
int main()
{
	int n=5;
	int k=1;
	bool b=n&(1<<k);
	cout<<b;
	return 0;
}