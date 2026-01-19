#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    const int sum = num1 + num2;
    std::cout << "The sum of the two integers is: " << sum << std::endl;
    return 0;
}