#include "CreateObject.h"
#include <iostream>
#include "Entity.h"
create_object::CreateObject::CreateObject()
{
	std::cout << "Object created" << "\n";
}

create_object::CreateObject::~CreateObject()
{
	std::cout << "Object destroyed" << "\n";
}

void create_object::CreateObject::print()
{
	std::cout << "Hello world" << std::endl;
}

void create_object::CreateObject::function()
{
	//create on stack
	Entity entity1;
	entity1.print();
	//this is the preferred way
	Entity entity2 = Entity();
	entity2.print();
	//create on a heap
	Entity* entity3 = new Entity();
	entity3->print();
	//Object get created on the stack
	Entity entity4(10);
	entity4.print();
	//using unique pointer
	std::unique_ptr<Entity> entity5 = std::unique_ptr<Entity>(new Entity());
	entity5->print();
	//1)Entity array of 100 Entity
	//2)Using unqiue pointers
	std::unique_ptr<Entity[]> entity_array = std::unique_ptr<Entity[]>(new Entity[100]);
	for (int i = 0; i < 100; i++)
	{
		entity_array[i].print();
	}
	int count = Entity::get_object_count();
	delete entity3;
}
