#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2,L3;


L1.insert(13,1);
L1.insert(12,1);
L1.insert(5,2);
L1.insert(1,4);
L1.insert(8,3);
L1.insert(17,2);
cout << "Element at position 3: " << L1.get(3) << endl;
L1.remove(3);
cout << "Element at position 3 after remove: " << L1.get(3) << endl;
cout << "size: " << L1.size() << endl;
L1.clear();
cout << "size after clear: " << L1.size() << endl;
//L1.view();



L2.insert(12,1);
L2.insert(15,1);
L2.insert(9,2);
L2.insert(1,4);
L2.insert(12,3);
L2.insert(14,2);
cout << "Element at position 2: " << L2.get(2) << endl;
L2.remove(2);
cout << "Element at position 2 after remove: " << L2.get(2) << endl;
cout << "size: " << L2.size() << endl;
L2.clear();
cout << "size after clear: " << L2.size() << endl;
//L2.view();




}
