#include <iostream>

int main()
{
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;

    std::cout << pi << " " << *ppi << std::endl;

    std::cout << "The value of ival \n"
              << "direct value: " << ival << "\n"
              << "indirect value: " << *pi << "\n"
              << "doubly indirect value: " << **ppi
              << std::endl;

    int i = 42;
    int *p;
    int *&r = p;

    return 0;
}