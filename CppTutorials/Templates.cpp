#include "Templates.h"
#include <string>
void my_template::function_template()
{
	my_template::print<int>(10);
	my_template::print<std::string>("HelloWorld");
	my_template::print<float>(10.0f);
}

void my_template::class_template()
{
	//different way to create object of a template class
	my_template::Array<int, 100> array1;
	std::cout << array1.get_size() << std::endl;
	my_template::Array<std::string, 100> array2;
	std::cout << array2.get_size() << std::endl;
	auto array3 = my_template::Array<int, 100>();
	std::cout << array3.get_size() << std::endl;
	auto array4 = new my_template::Array<int, 100>();
	std::cout << array4->get_size() << std::endl;
	delete array4;
	auto array5 = std::unique_ptr<Array<int, 100>>();
	array5->get_size();
}
