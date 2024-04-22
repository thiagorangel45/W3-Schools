#include <iostream>
#include <cmath>
#include <string>

using namespace std; 

int main_54(){
    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

    string letter[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};


    cout << letters[0][0] << endl;
    cout << letter[1][1][0] << endl;
    return 0;
}