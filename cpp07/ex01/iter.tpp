#include "iter.hpp"

void printInt(int const &value)
{
    std::cout << value << std::endl;
}

template <typename T>
void iter(T *array, size_t length, void (*f)(T const &))
{
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}
