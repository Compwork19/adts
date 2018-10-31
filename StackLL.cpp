#include "StackLL.h"
#include<iostream>

class Stack::Node 
{
	public:
	   int data = 0;
	   Node* link = nullptr;
};

Stack::~Stack()
{
	while(size()!=0)
	pop();
}

int Stack::size()
{
	return num_elements;
}

void Stack::push(int val)
{
	Node* newPtr = new Node{val};
	newPtr->link = frontPtr;
    frontPtr = newPtr;
    num_elements++;
    
 }

void Stack::pop()
{
	Node* delPtr;
	delPtr = frontPtr;
    frontPtr = frontPtr->link;
    delete delPtr;
    num_elements--;
}

int Stack::top()
{
	if(size()==0)
	  return 00;
	else
	  return frontPtr->data; 
}

void Stack::clear()
{
	while(size()!=0)
	 pop();
}
