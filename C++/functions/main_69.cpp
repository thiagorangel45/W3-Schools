#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main_69() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}