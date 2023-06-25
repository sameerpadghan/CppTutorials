#include "Entity.h"
#include <iostream>

int Entity::object_count = 0;
Entity::Entity()
{
	object_count++;
	std::cout << "Entity Created" << "=" << object_count << "\n";
}

Entity::Entity(int num)
{
	object_count++;
	std::cout << "Entity Created" << "=" << object_count << "\n";
}

Entity::~Entity()
{
	std::cout << "Entity Destroyed" << "=" << object_count << "\n";
	object_count--;
}

void Entity::print()
{
	std::cout << "Hello world" << "\n";
}

