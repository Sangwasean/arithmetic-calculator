#include <iostream>


int main() {
    double a;
    std::cout<<"Enter the first number:";
    std::cin>>a;
    double b;
    std::cout<<"Enter the second number:";
    std::cin>>b;
    char operand;
    std::cout<<"Select your operator(*,+,-,/):";
    std::cin>> operand;
    switch (operand) {
        case '+':
            std::cout<<a<<" + "<<b <<"="<<a + b<<std::endl;
            break;
        case '-':
            std::cout<<a<<" - "<<b <<"="<<a-b<<std::endl;
            break;
        case '*':
            std::cout<<a<<" * "<<b <<"="<< a*b<<std::endl;
            break;
        case '/':

            std::cout<<a<<" / "<<b <<"="<< a/b <<std::endl;
            break;
    }
    return 0;
}
