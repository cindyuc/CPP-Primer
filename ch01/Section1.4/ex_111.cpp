#include <iostream>
int main(){
    std::cout << "Please enter two numbers:" << std::endl;
    int left = 0, right = 0;
    std::cin >> left >> right;
    
    while (left <= right){
        std::cout << left << std::endl;
        ++left;
    }
    return 0;
}