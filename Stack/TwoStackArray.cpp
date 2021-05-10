#include<bits/stdc++.h>
using namespace std;

class twoStacks
{
	int *arr;
	int size;
	int top1,top2;
	public:
		twoStacks(int n=100){
			size=n;arr=new int[n];
			top1=-1; top2=size;
		}
	void push1(int x)
	{
	    arr[++top1]=x;
	}
	   
	//Function to push an integer into the stack2.
	void push2(int x)
	{
	    arr[--top2]=x;
	}
	   
	//Function to remove an element from top of the stack1.
	int pop1()
	{
	    if(top1==-1) return -1;
	    return arr[top1--];
	}

	//Function to remove an element from top of the stack2.
	int pop2()
	{
	    if(top2==size) return -1;
	    return arr[top2++];
	}

	void display()
	{
		cout<<"1st stack"<<endl;
		for (int i = top1; i > -1; i--)
			cout<<arr[i]<<" ";
		cout<<"2nd stack"<<endl;
		for (int i = top2; i < size; ++i)
			cout<<arr[i]<<" ";
	}
};


int main(int argc, char const *argv[])
{
	twoStacks ts;
	ts.push1(40); 	ts.push1(10);
	ts.push2(40); 	ts.push2(40);
	ts.push1(20);	ts.push1(40);
	ts.push2(5); 	ts.push2(15);
	ts.push2(35); 	ts.push2(25);
	ts.display();
	ts.pop1();
	ts.pop2();
	ts.display();

	return 0;
}
