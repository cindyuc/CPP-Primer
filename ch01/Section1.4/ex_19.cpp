#include <iostream>
int main()
{
    /* code */
    int sum = 0, i = 50;
    while (50 <= i and i <= 100){
        sum += i;
        ++i;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

    return 0;
}
