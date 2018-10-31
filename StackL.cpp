#include "StackL.h"
#include<iostream>


int Stack::size()
{
	data.size();
}

void Stack::push(int b)
{
	   data.insert(b,1);
   }
   
void Stack::pop()
{
	   data.remove(1);
   }

int Stack::top()
{
	  if(data.size()==0)
	  cout << "The stack is empty " << endl;
	  else
	  return data.get(1); 
	   
   }

void Stack::clear()
{
	   while(size()!=0);
	   data.remove(1);
	   
   }
