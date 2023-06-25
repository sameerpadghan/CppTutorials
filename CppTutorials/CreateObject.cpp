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
	std::unique_ptr<Entity> entity5 = std::unique_ptr<Entity>();
	entity5->print();
	std::unique_ptr<Entity> entity6;
	entity6->print();
	int count = Entity::get_object_count();
	delete entity3;
}
