#include <iostream>
#include <tuple>

//Իրականացնել զանգված, որտեղ կպահպանվեն տարատեսակ տիպերի արժեքներ


int main()
{
	/*std::tuple<int, char, bool, float> array(45, 'A', false, 78.76);
	std::cout << std::get<0>(array) << std::endl;*/

	const int array_size = 4;
	

	int int_value = 10;
	float float_value = 89.7;
	char char_value = 'A';
	bool bool_value = false;

	void* array[array_size] = { &int_value, &float_value, &char_value, &bool_value };
	

	
	int* int_ptr = static_cast<int*>(array[0]);
	float* float_ptr = static_cast<float*>(array[1]);
	char* char_ptr = static_cast<char*>(array[2]);
	bool* bool_ptr = static_cast<bool*>(array[3]);
	
	std::cout << *int_ptr  <<  std::endl;
	std::cout << *float_ptr << std::endl;
	std::cout << *char_ptr << std::endl;
	std::cout << *bool_ptr << std::endl;

}
