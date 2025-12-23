// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int age;
    std:: string name;
    std::cout << "Hello! What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Your name is " << name << std::endl;
    std::cout << "What is your age?" << std::endl;
    std::cin >> age;
    std::cout << "Your age is "  << age << ". Congrats on being so old" << std::endl;
    std::cout << std::endl << std::endl;
    
    return 0;
}