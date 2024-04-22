#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main_55(){

    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
letters[0][0] = "Z";

cout << letters[0][0];
    return 0;

}