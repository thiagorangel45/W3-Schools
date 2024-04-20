#include <iostream>
#include <string>

using namespace std;

int main_23(){

    string myString = "Hello";
    cout << myString[0] << endl; //saida: H
    cout << myString[1] << endl; // saida: e

    myString[0] = 'J';
    cout << myString << endl;

    return 0;
}