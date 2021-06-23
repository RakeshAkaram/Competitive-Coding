#include<bits/stdc++.h>
using namespace std;

/* Set Kth bit set of a number.
* Use Left Shift to reach the Kth bit and Apply OR operation
* Time Complexity: O(logn) -> As number of bits is represented by Log(n).
*/
int main()
{
	int n=14;
	int k=0;
	int b=n|(1<<k);
	cout<<b;
	return 0;
}