#include<bits/stdc++.h>
using namespace std;
int min=INT_MAX;
void push(stack<int>& s, int a){
	min=min(min,a);
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	if(s.size()>=n) return true;
	return false;
}

bool isEmpty(stack<int>& s){
	return s.empty();
}

int pop(stack<int>& s){
	int top1=s.top();
	
	s.pop();
	return top1;
}

int getMin(stack<int>& s){
	int min;
	int *p=&s;

}

int main()
{
	stack<int> s;int n=10;
	push(s,10);
	push(s,20);
	push(s,130);
	push(s,140);
	push(s,100);
	push(s,100);
	push(s,100);
	push(s,100);
	push(s,300);
	push(s,100);
	cout<<isEmpty(s);
	cout<<isFull(s,n);
	cout<<getMin(s);
	return 0;
}