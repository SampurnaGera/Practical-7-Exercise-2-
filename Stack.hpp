#ifndef Stack_hpp
#define Stack_hpp
#include <stdio.h>
#include <iostream>
#include "StackI.hpp"
using namespace std;

template <typename T> class Stack:StackI<T>
{
protected:
  // position of top of the stack
  int top_pos; 
  int num_of_elements; 
  int size ;
  // Creating an object of class Stack
  T s [];
 

public:
  Stack()
  {
    s[20];
    top_pos=0;
    num_of_elements=0;
    size=20;
  }

  Stack(int n)
  {
    cout << "Creating a stack of size " << n;
    top_pos=0;
    num_of_elements=0;
    size=n;
  }

void push(T t)
{
  if (num_of_elements>=0 && num_of_elements<size)
  {
    s[top_pos++]=t;
    num_of_elements++;
  }
}

void pop()
{
  if (num_of_elements>0)
  {
    --top_pos;
    --num_of_elements;
  }
}

T top()
{
  if (num_of_elements>0)
  {
    return s [top_pos];
  }
  else
    return s [0];
}

void print()
{
  if (num_of_elements==0)
  {
    std :: cout << "\nEmpty Stack!" << endl;
  }
  else
  {
    for(int r=top_pos-1;r>=0;r--)
    {
      if ( r==top_pos-1)
      {
        cout << "\n Current Stack";
        cout << "\n top: ";
      }
      else
        cout << "\t";
      cout << "\t" << s[r] << endl;
    }
  }

}

bool isEmpty()
{
return (num_of_elements==0)? true : false;
}
};
#endif