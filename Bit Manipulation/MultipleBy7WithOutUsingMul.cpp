#include<bits/stdc++.h>
using namespace std;

/* x<<3 =x*8 - x= 7*x
* Time Complexity - O(1)
*/
int solve(int x)
{
	int ans=(x<<3)-x; 
	return ans;
}
int main()
{
	int n=8;
	cout<<solve(n);
	return 0;
}