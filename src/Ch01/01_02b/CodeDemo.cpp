// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
#include <iostream> //INCLUDE STANDARD LIBRARY FOR PRINTING TEXT, RECIEVING TEXT, ETC.
// Pre-processor lines do not end with a semicolon
int main(){ //int means that it returns an integer, main is the function name, uses no param
    // code blocks are created with curly brackets (note above and below)
    std::cout << "Hello World" << std::endl;// std=using standard library, cout=character output, endl=end line
    std::cout << std::endl << std::endl; //this line creates space at the end of output
    return 0;
}