#include "StackV.h"
#include<iostream>

//size of stack
int Stack::size()
{
	data.size();
	
}

//add element to stack
void Stack::push(int a)
{
		data.push_back(a);
}
	
//remove element from stack
void Stack::pop()
{
	 data.pop_back;  
}
   

 int Stack::top()
 {
	   /*if(data.size()>0)
	   return data.back();
	   else
	   cout << "The stack is empty " << endl;*/
	   
	   if(data.size()==0)
	   cout << "The stack is empty " << endl;
	   else
	   return data.back();
  
 }

//clear stack
void Stack::clear()
{
	
	while(size()!=0)
	remove(1);
	
}
