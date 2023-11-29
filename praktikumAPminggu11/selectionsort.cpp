#include <iostream>
using namespace std;

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
    int data[] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};
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

    return 0;
}
  