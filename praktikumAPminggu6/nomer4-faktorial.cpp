#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan bulat positif (1-33): ";
    cin >> n;

    int faktorial = 1;

    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }

    cout << "Faktorial dari " << n << " adalah " << faktorial << endl;

    return 0;
}