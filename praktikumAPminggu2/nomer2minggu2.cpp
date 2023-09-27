#include <iostream>
using namespace std;

int main() {
    float Jarak, Waktu, Kecepatan;

    cout << "Masukan Jarak yang Ditempuh  (in Km): ";
    cin >> Jarak;

    cout << "Masukan Waktu Yang dibutuhkan (in Jam): ";
    cin >> Waktu;

    Kecepatan = Jarak / Waktu;

    cout << "Rata-rata Kecepatan Kendaraan: " << Kecepatan << " Km per Jam";

    return 0;
}