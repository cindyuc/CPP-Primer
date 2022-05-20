#include <iostream>

int main()
{   
    int a = 1, b = 3;
    int *p1 = &a, *p2 = p1;

    std::cout<< "the value of P1 is " << p1 << std::endl;
    std::cout<< "the value of the p2 points is " << *p2 << std::endl;

    // change the value of a pointer
    p1 = &b;
    std::cout << "the value of P1 is " << p1 << std::endl;

    // change the value to which the pointer points
    *p2 = 5;
    std::cout << "the value of the p2 points is " << *p2 << std::endl;


    return 0;
}