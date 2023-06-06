#include <iostream>

template <typename T, size_t N>
void function(T (&arg)[N])
{
    static_assert(N == 10, "Array size must be exactly 10.");
   
}

int main() {
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	function(array);

    return 0;
}

