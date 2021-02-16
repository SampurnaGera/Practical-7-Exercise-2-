#include <iostream>
#include "Stack.hpp"

int main(int argc, const char * argv [])
{
Stack<int> s = Stack<int>(4);
s.print();
s.push(4);
s.push(2);
s.push(5);
s.push(6);
s.print();
s.pop();
s.print();
s.push(3);
s.print();
s.pop();
s.print ();
s.pop();
s.print ();
s.pop();
s.print ();
s.pop();
s.print ();

return 0;
}