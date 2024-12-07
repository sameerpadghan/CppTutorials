#include "SmartPointers.h"
#include <iostream>
#include "Entity.h"

smart_pointers::SmartPointers::SmartPointers()
{
	
}
smart_pointers::SmartPointers::~SmartPointers()
{

}

void smart_pointers::SmartPointers::function()
{
	std::unique_ptr<int> x1;
	std::unique_ptr<Entity> entity1;
	std::unique_ptr<int> x2();
	std::unique_ptr<Entity> entity2();
	auto entity4 = std::unique_ptr<Entity>();
	auto entity5 = new std::unique_ptr<Entity>();
}
