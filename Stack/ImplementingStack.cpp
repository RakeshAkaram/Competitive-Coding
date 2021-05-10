#include<bits/stdc++.h>
using namespace std;

/*
1. Pop
2. Push
3. top/peek
4. isEmpty
5. display
*/

template <class T>
class ImplementingStack
{
public:
	T array[100];
	int top;
	ImplementingStack()
	{
		top=-1;
	}
	~ImplementingStack(){}
	bool push(T t)
	{
		top++;
		array[top]=t;
		return true;
	}
	void pop()
	{
		if(top==-1)
			cout<<"UnderFlow"<<endl;
		top--;
		cout<<"Poped"<<endl;
	}
	void peek()
	{
		cout<<"Peek:"<<array[top]<<endl;
	}

	void display()
	{
		cout<<"All Elements of Stack:"<<endl;
		for (int i = top; i >= 0; i--)
		{
			cout<<array[i]<<"-";
		}
	}
	
};



int main(int argc, char const *argv[])
{
	ImplementingStack<int> iS;
	iS.push(10);
	iS.push(20);iS.push(30);iS.push(40);iS.push(100);
	iS.peek();
	iS.pop();
	iS.peek();
	iS.display();
	return 0;
}