#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main_62(){

    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";  
    cout << meal << "\n";  

    cout << &food; 

    return 0;
}