#include <iostream>
#include <string>

using namespace std;

int main_25(){
    
    string fullName;
    cout << "Type your full name: "; 
    cin >> fullName;
    cout << "Your name is: " << fullName;
    

    string fullName1;
    cout << "Type your full name: "; 
    getline (cin, fullName1); // usado para incluir os espaços já que o cin conta os espaços vazios
    cout << "Your name is: " << fullName1;
    return 0;
}