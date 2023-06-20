#include "Entity.h"
#include <iostream>
Entity::Entity()
{
	std::cout << "Entity Created" << "\n";
}

Entity::~Entity()
{
	std::cout << "Entity Destroyed" << "\n";
}
