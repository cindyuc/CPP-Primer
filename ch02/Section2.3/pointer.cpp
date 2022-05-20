#include <iostream>

int main()
{   
    int ival = 1024;
    int *pi = 0;
    int *pi2 = &ival;
    if (pi)
        std::cout << "valid p1" << std::endl;
        

    if (pi2)
        std::cout << "valid pi2" << std::endl;

    double obj = 3.14, *pd = &obj;
    void *pv = &obj;
    pv = pd;

    std::cout << pv << std::endl;

    return 0;
}