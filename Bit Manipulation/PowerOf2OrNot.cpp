#include<bits/stdc++.h>
using namespace std;

/* using Mod and divide 2
* Time Complexity - O(logn)
*/
bool solveMod2(int x)
{
	int count=0;
	while(x!=0)
	{
		if(x%2==1) count++;
		x=x/2;
	}
	if (count==1)
		return true;
	return false;
}
/* AND with 1 and checking count
* Time Complexity - O(logn)
*/
bool isPowerofTwo(long long n){
        
        // Your code here   
        /*long long d=log2(n);
        if(n==(1<<d)) return true;
        return false;*/
        if(n==0) return false;
        int count=0;
        while(n!=0)
        {
            count+=(n&1)?1:0;
            if(count>1) return false;
            n=n>>1;
        }
        return true;
    }

/* If n is power of 2, then n-1 will give all ones. On AND n-1 and n we get all zeros.
* Time Complexity - O(1)
*/
bool solve(int x)
{
	return x&&!(x&x-1);
}
int main()
{
	int n=8;
	cout<<solveMod2(n)<<endl;
	cout<<solve(n);
	return 0;
}