#include <iostream>
#include <unordered_map>

std::unordered_map<int, int> array_count (int * array, int size)
{

   std::unordered_map<int, int> my_map;

    for (int i = 0; i < size; ++i)
    {
        my_map[array[i]]++;
    }
    return my_map;
}
int main()
{
  int array[] = {1, 2, 2, 1, 5, 3, 3};
  int size = 7;
  std::unordered_map<int, int> my_map = array_count(array, size);
  for(auto elem : my_map)
  {
    std::cout << "Key: " << elem.first << "  Value: " << elem.second << std::endl;
  }

}