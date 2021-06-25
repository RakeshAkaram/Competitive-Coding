#include<bits/stdc++.h>
using namespace std;

// Using stack
int maxProfit1(vector<int>& prices) 
{
    stack<int> stk;
    int maxReturns=0;

    for(auto val:prices)
    {
    	if (stk.empty())
    		stk.push(val);
    	else if (stk.top()>=val)
    	{
    		stk.pop();
    		stk.push(val);
    	}
    	else if(stk.top()<val && maxReturns<(val-stk.top()))
    		maxReturns=val-stk.top();
    }

    return maxReturns;
}

int maxProfit(vector<int>& prices) 
{
	int min=prices[0];
	int maxReturns=0;

	for(auto val:prices)
	{
		if (min>val)
			min=val;
		else if (min<val && maxReturns<(val-min))
		{
			maxReturns=val-min;
		}
	}

	return maxReturns;
}

int main()
{
	std::vector<int> input{4,2,1,2,6};
	/*Test cases:
	1,2,3,4 - 3
	7,2,6,1,4 - 4
	7,1,5,2,6,4 - 5
	7,2,5,1,6,4 - 5
	4,3,2,1 - 0
	4,2,1,2,6 - 5
	*/
	cout<<maxProfit(input);
	return 0;
}