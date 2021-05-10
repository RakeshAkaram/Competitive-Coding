#include<bits/stdc++.h>
using namespace std;

char* reverse(char *S, int len)
{
    stack<char> stk;
    for(int i=0;i<len;i++)
    {
        stk.push(S[i]);
        cout<<S[i];
    }
    for(int i=0;i<len && !stk.empty();i++)
    {
        S[i]=stk.top();
        stk.pop();
    }

    return S;
}

int main()
{
	char sq[4]={'1','2','3','4'};
	
	char *out=reverse(sq,4);
	for (int i = 0; i < 4; ++i)
		cout<<out[i];
	return 0;
}