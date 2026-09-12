#include "Array.hpp"

int main()
{
    Array<int> emptyArray;
    std::cout << "Empty Array Size: " << emptyArray.size() << std::endl;

    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); i++)
        intArray[i] = i * 10;

    for (unsigned int i = 0; i < intArray.size(); i++)
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;

    std::cout << "Integer Array:" << std::endl;
    for (unsigned int i = 0; i < intArray.size(); i++)
        std::cout << intArray[i] << std::endl;

    Array<double> doubleArray(5);
    for (unsigned int i = 0; i < doubleArray.size(); i++)
        doubleArray[i] = i * 1.5;

    std::cout << "Double Array:" << std::endl;
    for (unsigned int i = 0; i < doubleArray.size(); i++)
        std::cout << doubleArray[i] << std::endl;

    Array<int> copyArray(intArray);
    copyArray[0] = 999;
    std::cout << "Copy of Integer Array intArray[0] = 999:" << std::endl;
    std::cout << "copyArray[0] = " << copyArray[0] << std::endl;
    std::cout << "Original intArray[0] = " << intArray[0] << std::endl;

    Array<int> assignedArray;
    assignedArray = intArray;
    assignedArray[1] = 888;
    std::cout << "Assigned Integer Array intArray[1] = 888:" << std::endl;
    std::cout << "assignedArray[1] = " << assignedArray[1] << std::endl;
    std::cout << "Original intArray[1] = " << intArray[1] << std::endl;

    try
    {
        std::cout << intArray[6] << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    Array<std::string> strArray(3);
    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "!";

    std::cout << "String Array:" << std::endl;
    for (unsigned int i = 0; i < strArray.size(); i++)
        std::cout << strArray[i] << std::endl;

    return 0;
}