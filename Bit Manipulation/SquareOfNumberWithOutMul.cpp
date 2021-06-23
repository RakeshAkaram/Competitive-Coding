#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
	int result=0,r=n;
	while(n!=0)
	{
		int pow=log2(n);
		result+=r<<pow;
		n-=1<<pow;
	}
	return result;
}


int main()
{
	for(int i=1;i<10;i++)
	cout<<i<<":"<<solve(i)<<endl;
	return 0;
}