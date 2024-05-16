#include <iostream>

using namespace std;

// calculadora básica (Somente números inteiros)
int main_12(){
    double x, y;
    double sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;  
    return 0;
}