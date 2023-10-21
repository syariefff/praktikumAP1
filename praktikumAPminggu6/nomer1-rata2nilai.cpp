#include <iostream>
#include <limits>
using namespace std;

int main() {
    const int n = 10;

    int nilai;
    double sum = 0;
    int tertinggi = numeric_limits<int>::min();
    int terendah = numeric_limits<int>::max();

    for (int i = 0; i < n; i++) {
        std::cout << "Masukkan nilai " << i + 1 << ": ";
        std::cin >> nilai;

        sum += nilai;

        if (nilai > tertinggi) {
            tertinggi = nilai;
        }

        if (nilai < terendah) {
            terendah = nilai;
        }
    }

    double rata_rata = sum / n;

    cout << "Nilai Rata-rata: " << rata_rata << endl;
    cout << "Nilai Tertinggi: " << tertinggi << endl;
    cout << "Nilai Terendah: " << terendah << endl;

    return 0;
}
     

  
