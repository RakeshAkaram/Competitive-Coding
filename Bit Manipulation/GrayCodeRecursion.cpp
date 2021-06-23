#include<bits/stdc++.h>
using namespace std;

/* Gray Code generation using recursion
*/
std::vector<string> solve(int n)
{
	// Base Condition
	if(n==1)
	{
		std::vector<string> bres;
		bres.push_back("0");
		bres.push_back("1");
		return bres;
	}
	
	std::vector<string> newRes;
	std::vector<string> result=solve(n-1);
	for (std::vector<string>::iterator i = result.begin(); i != result.end(); ++i)
		newRes.push_back("0"+*i);

	for (std::vector<string>::iterator i = result.end()-1; i != result.begin()-1; i--)
			newRes.push_back("1"+*i);

	return newRes;
}

int main(int argc, char const *argv[])
{
	int n=3;
	std::vector<string> output=solve(n);
	for(auto result:output)
		cout<<result<<endl;
	return 0;
}