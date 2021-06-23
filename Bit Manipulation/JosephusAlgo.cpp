#include<bits/stdc++.h>
using namespace std;

/* 
Check Video for explaination:
* https://www.youtube.com/watch?v=NjcMT9wZHV0&list=PL-Jc9J83PIiFJRioti3ZV7QabwoJK6eKe&index=4
*/

int main(int argc, char const *argv[])
{
	int n=17;
	/* represent n in 2^x+l
	*/
	int x=0;
	int p=1;
	while(p*2<=n)
	{
		p=p*2;
		x++;
	}

	// 'p' value acts as 2^x
	// Lets find 'l'
	int l=n-p;

	cout<<"Number which will remain is:"<<2*l+1;

	return 0;
}