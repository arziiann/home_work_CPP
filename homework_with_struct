#include <iostream>
#include <tuple>

//Իրականացնել զանգված, որտեղ կպահպանվեն տարատեսակ տիպերի արժեքներ



struct Person
{
	int age;
	std::string name;
	std::string last_name;

	
};

void PrintForPerson(Person* p)
{
	std::cout << p->age << "\n";
	std::cout << p->last_name << "\n";
	std::cout << p->name << "\n";
}



template<typename A>

void function(void** array, int array_size)
{
	int int_value = 10;
	float float_value = 89.7;
	char char_value = 'A';
	bool bool_value = false;
	Person p;
	p.age = 30;
	p.last_name = "Grigoryan";
	p.name = "Vardan";


	array[0] = &int_value;
	array[1] = &float_value;
	array[2] = &char_value;
	array[3] = &bool_value;
	array[4] = &p;

	int* int_ptr = static_cast<int*>(array[0]);
	float* float_ptr = static_cast<float*>(array[1]);
	char* char_ptr = static_cast<char*>(array[2]);
	bool* bool_ptr = static_cast<bool*>(array[3]);
	A* Struct_ptr = static_cast<A*>(array[4]); //xndir


	std::cout << *int_ptr  <<  std::endl;
	std::cout << *float_ptr << std::endl;
	std::cout << *char_ptr << std::endl;
	std::cout << *bool_ptr << std::endl;
	PrintForPerson(Struct_ptr);	
}




int main()
{
	const int array_size = 5;
	void* array[array_size];
	function<Person>(array,array_size);
}
