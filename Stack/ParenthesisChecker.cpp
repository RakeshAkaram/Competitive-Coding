#include<bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
        stack<char> stk;
        for(auto s:x)
        {
            if(s=='(' || s== '[' || s== '{') stk.push(s);
            else if(s==')' && !stk.empty() && stk.top()=='(') stk.pop();
            else if(s==']' && !stk.empty() && stk.top()=='[') stk.pop();
            else if(s=='}' && !stk.empty() && stk.top()=='{') stk.pop();
            else return false;
        }
        if(stk.empty()) return true;
        return false;
}

int main()
{
	string parenthesis="{[]()}";
	if (ispar(parenthesis)) cout<<"Balanced"<<endl;
	else cout<<"Not Balanced";
	return 0;
}