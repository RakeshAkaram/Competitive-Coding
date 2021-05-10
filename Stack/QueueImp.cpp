#include<bits/stdc++.h>
using namespace std;

template <class T>
class QueueImp
{
public:
	int front;
	int rear;
	T array[100];
	QueueImp()
	{
		front=-1;
		rear=0;
	}
	~QueueImp(){}
	void insert(T t)
	{
		front++;
		array[front]=t;
		
	}
	void del()
	{
		rear++;
		if(rear==front) cout<<"Under Flow"<<endl;
	}
	void display()
	{
		cout<<"All Elements:"<<endl;
		for (int i = rear; i <= front; ++i)
			cout<<array[i]<<"-";
	}
	
};

int main(int argc, char const *argv[])
{
	QueueImp<int> qI;
	qI.insert(10);
	qI.insert(20);qI.insert(30);qI.insert(40);qI.insert(50);
	qI.display();
	qI.del();
	qI.display();
	return 0;
}