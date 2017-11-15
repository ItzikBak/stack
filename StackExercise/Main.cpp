#include <iostream>
#include "Stack.h"

void main()
{
	StackExercise::Stack<> is;

	is.Push(4);
	is.Push(15);

	std::cout << is.Pop() << "," << is.Pop() << std::endl;

	StackExercise::Stack<double> ds;
	ds.Push(4.1);
	ds.Push(-3.5);

	std::cout << ds.Pop() << "," << ds.Pop() << std::endl;
}