#include <iostream>
#include <string> 

using namespace std;

int main_9() {
    int myNum = 5;               
    double myFloatNum = 5.99;    
    char myLetter = 'D';         
    std::string myText = "Hello";     
    bool myBoolean = true;       

    std::cout << myNum << endl;       
    std::cout << myFloatNum << endl;   
    std::cout << myLetter << endl;    
    std::cout << myText << endl;      
    std::cout << std::boolalpha << myBoolean << endl;  
    return 0;
}
