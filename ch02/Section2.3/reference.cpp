#include <iostream>

int main()
{
    int ival = 1024;
    int &refVal = ival;

    refVal = 2;
    int ii = refVal;

    int &refVal3 = refVal;
    // int i = refVal;

    int i = 1024, i2 = 2048;
    int &r = i, r2 = i2;
    int i3 = 1024, &ri = i3;
    int &r3 = i3, &r4 = i2;

    std::cout << ii << " " << i;


    return 0;
}