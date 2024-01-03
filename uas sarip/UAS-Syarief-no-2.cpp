#include <iostream>

using namespace std;

struct Data {
    string nama;
    int tanggal;
    int bulan;
    int tahun;
};

void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSortDescending(int arr[], int ukuran) {
    for (int i = 0; i < ukuran - 1; i++) {
        int maks_index = i;
        for (int j = i + 1; j < ukuran; j++) {
            if (arr[j] > arr[maks_index]) {
                maks_index = j;
            }
        }
        tukar(arr[maks_index], arr[i]);
    }
}


int main() {
    const int full = 20; 
    Data data[full];

    cout << "DATA ANAK" << endl;
    for (int i = 0; i < full; i++) {
        cout << endl;
        cout << "Nama: ";
        cin >> data[i].nama;

        cout << "tanggal lahir: ";
        cin >> data[i].tanggal;

        cout << "bulan lahir: ";
        cin >> data[i].bulan;

        cout << "tahun lahir: ";
        cin >> data[i].tahun;
    }

    int ukuran = sizeof(data) / sizeof(data[0]);

    cout << "Data sebelum diurutkan secara menurun: ";
    for (int i = 0; i < ukuran; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    selectionSortDescending(data, ukuran);

    cout << "Data setelah diurutkan secara menurun: ";
    for (int i = 0; i < ukuran; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    
    int cari;
    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    int terakhir = nilai[ukuran - 1];
    nilai[ukuran - 1] = cari;

    int i;
    for (i = 0; nilai[i] != cari; i++) {
    }

    nilai[ukuran - 1] = terakhir;
    if (i < ukuran - 1 || nilai[ukuran - 1] == cari) {
        cout << "Data ditemukan di index ke-" << i << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
          }
