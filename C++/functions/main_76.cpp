#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main_76() {
  int result = sum(10);
  cout << result;
  return 0;
}