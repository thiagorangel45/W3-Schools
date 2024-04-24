#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) { 
    cout << myNumbers[i] << "\n"; 
  } 
}

int main_74() { 
  int myNumbers[5] = {10, 20, 30, 40, 50}; 
  myFunction(myNumbers);
  return 0;
} 