#include "iter.hpp"

int main()
{
    int numbers[] = {0, 1, 2, 3, 4};
    int repeated[5];

    iter(numbers, 5, printInt);
    for (int i = 0; i < 5; ++i)
        repeated[i] = 42;
    iter(repeated, 5, printInt);
    return 0;
}