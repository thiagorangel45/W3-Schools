#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main_35(){
    int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening." << endl;
}

// forma mais curta de executar o mesmo bloco acima.
int time1 = 21;
string result = (time1 < 18) ? "Good day." : "Good evening.";
cout << result << endl;

return 0;
}