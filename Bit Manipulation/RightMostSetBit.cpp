#include<bits/stdc++.h>
using namespace std;

/* Right Most Set Bit
* Technique : num and 2's complement of num
* Time complexity : O(1)
*/
int main(int argc, char const *argv[])
{
	int x=76;
	int rsbm=x & -x;
	cout<<rsbm;
	return 0;
}