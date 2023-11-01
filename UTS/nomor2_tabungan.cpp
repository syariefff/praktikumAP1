#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double tabunganDollar, tabunganEuro, kursUSDToIDR, kursEuroToUSD, hargaMobilIDR;

   
    cout << "Masukkan jumlah tabungan dalam Dollar: $";
    cin >> tabunganDollar;

    cout << "Masukkan jumlah tabungan dalam Euro: €";
    cin >> tabunganEuro;

    cout << "Masukkan kurs 1 US Dollar ke Rupiah: Rp.";
    cin >> kursUSDToIDR;

    cout << "Masukkan kurs 1 Euro ke US Dollar: $";
    cin >> kursEuroToUSD;
   
    cout << "Masukkan harga mobil dalam Rupiah: Rp.";
    cin >> hargaMobilIDR;

    double totalTabunganIDR = (tabunganDollar * kursUSDToIDR) + (tabunganEuro * kursEuroToUSD * kursUSDToIDR);

    double sisaUangIDR = totalTabunganIDR - hargaMobilIDR;

   
    cout << fixed << setprecision(2);
    cout << "Total tabungan Pak Anto dalam Rupiah: " << "Rp." << totalTabunganIDR  << endl;
    cout << "Sisa uang Pak Anto setelah membeli mobil: " << "Rp." << sisaUangIDR  << endl;

    return 0;
}