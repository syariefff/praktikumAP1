#include <iostream>

using namespace std;

struct Barang {
    string kode_brg;
    string nama_brg;
    int jumlah;
    int harga_satuan;
};

int main() {
    const int full = 2; 
    Barang barang[full];

    cout << "PENJUALAN BARANG" << endl;
    for (int i = 0; i < full; i++) {
        cout << endl;
        cout << "Kode barang: ";
        cin >> barang[i].kode_brg;

        cout << "Nama barang: ";
        cin >> barang[i].nama_brg;

        cout << "Jumlah: ";
        cin >> barang[i].jumlah;

        cout << "Harga satuan: ";
        cin >> barang[i].harga_satuan;
    }
  
    int total_harga_penjualan = 0;
    for (int i = 0; i < full; i++) {
        total_harga_penjualan += barang[i].jumlah * barang[i].harga_satuan;
    }

    int keuntungan = total_harga_penjualan * 0.1;

    cout << endl;
    cout << "Total harga penjualan: Rp. " << total_harga_penjualan << endl;
    cout << "Keuntungan: Rp. " << keuntungan << endl;

    return 0;
          }
