#include <iostream>
int main()
{
    int sum = 0;
    for(int val = 0; std::cin >> val; sum += val)
        continue;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}