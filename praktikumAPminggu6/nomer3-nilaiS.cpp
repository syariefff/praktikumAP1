#include <iostream>
using namespace std;

int main() {
  double S = 0;
  for (int i = 1; i <= 1000; i++) {
    if (i % 2 == 1) {
      S += 1.0/i; 
    } else {
      S -= 1.0/i;
    }
  }

  cout << "Nilai S = " << S << endl;

  return 0;
}