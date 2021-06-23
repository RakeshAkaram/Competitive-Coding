#include<bits/stdc++.h>
using namespace std;

/* Kth set bit set or not of a number.
* Use Left Shift to reach the Kth bit and Apply AND operation
* Time Complexity: O(logn) -> As number of bits is represented by Log(n).
*/
int main()
{
	int A=5,B=10;
	// 1. XOR which will say which bits are different (i.e. they are set to 1)
	int C=A^B;
	
	// 2. To cound number of bit difference
	int count=0;
	while(C!=0)
	{
		if(C&1) count++;
		C=C>>1;
	}

	/* Even Below code works - uncomment it.
	int count=1;
    int c=a^b;
    while(c!=1)
    {
        if(c%2==1)
        count+=1;
        
        c=c/2;
    }
	*/

	cout<<"Bit difference:"<<count;
	return 0;
}