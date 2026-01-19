#include <iostream>
int main() {
    int inputNum;
    std::cout << "Enter an integer: ";
    std::cin >> inputNum;
    int tripledNum = inputNum * 3;
    std::cout << "The tripled value is: " << tripledNum << std::endl;
    return 0;
}