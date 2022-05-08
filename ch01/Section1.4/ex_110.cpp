#include <iostream>
int main(){
    int sum = 0, i = 10;
    while (0 <= i and i <= 10){
        sum += i;
        --i;
    }
    std::cout << "Sum of 0 to 10 inclusive is " << sum << std::endl;

    return 0;
}