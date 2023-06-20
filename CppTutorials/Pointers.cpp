#include "Pointers.h"
#include <iostream>
#include "Entity.h"
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

void Pointers::raw_pointer(int*& array_ptr)
{
	//1)here we pass the array pointer reference i.e array_ptr
	//2)In raw pointer once we allocate the array we need to deallocate it
	//3)By using the delete
	//4)The 
	array_ptr = new int[100];
	for (int i = 0; i < 100; i++)
	{
		array_ptr[i] = i;
	}
}

void Pointers::smart_pointer()
{
	//Dynamically allocate variable
	std::unique_ptr<int> int_ptr = std::unique_ptr<int>(new int(100));
	//Dynamically allocate array
	std::unique_ptr<int[]> array_ptr = std::unique_ptr<int[]>(new int[100]);
	//Dynamically allocate Entity
	std::unique_ptr<Entity> entity_ptr = std::unique_ptr<Entity>(new Entity());
	//Dynamically allocate Entity array
	std::unique_ptr<Entity[]> entity_array_ptr = std::unique_ptr<Entity[]>(new Entity[100]);
	//allocating entity on stack
	std::unique_ptr<Entity[]> entity_array;
	for (int i = 0; i < 100; i++)
	{
		array_ptr[i] = i * i;
	}
	for (int i = 0; i < 100; i++)
	{
		std::cout << array_ptr[i] << "\n";
	}
	//print the address stored inside the pointer
	std::cout << int_ptr << "\n";
	//print the value pointer is pointing to
	std::cout << *int_ptr << "\n";
}

void Pointers::allocate_array()
{
	int* array_ptr = nullptr;
	Pointers::raw_pointer(array_ptr);
	for (int i = 0; i < 100; i++)
	{
		std::cout << array_ptr[i] << "\n";
	}
	delete array_ptr;
	array_ptr = nullptr;
}

void Pointers::shared_pointer()
{
	//allocating on stack
	std::shared_ptr<Entity> entity1 = std::shared_ptr<Entity>();
	//allocating on heap
	std::shared_ptr<Entity> entity2 = std::shared_ptr<Entity>(new Entity());
	//allocating Entity array on stack
	std::shared_ptr<Entity[]> entity3 = std::shared_ptr<Entity[]>();
	//allocating Entity array on stack
	std::shared_ptr<Entity[]> entity4 = std::shared_ptr<Entity[]>(new Entity[100]);
	///////////////////////////////////////////////////////////////////////////////
}
