#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main_49(){
    int i = 0;
while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  cout << i << "\n";
  i++;
} 
return 0;
}