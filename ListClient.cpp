#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 for(int i=1;i<10;i++)
 L2.insert(i*2,i);
 
 cout<<L2.size()<<endl;
 
 cout<<L2.get(3);
 
 for(int i=1;i<12;i++)
 L1.insert(i+3,i);

cout<<L1.size()<<endl;

 cout<<L1.get(5);
 

}
