#include "Pointers.h"
#include <iostream>
void Pointers::function()
{
	int a = 10;
	std::cout << a << "\n";
	//Storing address of a in address
	int* address = &a;
	//Accessing the value address is pointing to
	int value = *address;
	//Changing the value address is pointing to
	*address = 20;
	//printing address
	std::cout << address << "\n";
	//printing the value address is pointing to
	std::cout << *address << "\n";
	//printing the address of the address
	std::cout << &address << "\n";
}
