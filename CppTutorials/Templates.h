#pragma once
#include <iostream>
namespace my_template
{
	//template function
	template<typename T>
	void print(T value);
	//implementation
	template<typename T>
	void print(T value)
	{
		std::cout << value << std::endl;
	}
	//template class
	template<typename T, int n>
	class Array
	{
	private:
		T array[n];
	public:
		int get_size() const
		{
			return n;
		}
	};
	//this function is used to show template function
	void function_template();
	void class_template();
}

