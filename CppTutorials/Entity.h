#pragma once
class Entity
{
public:
	//Default construtor
	Entity();
	//Paramterized constructor
	Entity(int num);
	~Entity();
	void print();
	static inline int get_object_count()
	{
		return object_count;
	}
private:
	static int object_count;
};