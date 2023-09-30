#include <iostream>
using namespace std;
int main() {
    int x, y, z;
    int maksimal ;
    
    cout << "Masukkan Angka Pertama: ";
    cin >> x;

    cout << "Masukkan Angka Kedua: ";
    cin >> y;

    cout << "Masukkan Angka Ketiga: ";
    cin >> z;

    if (x > y and x > z) {
      maksimal = x;
    }else if (y > x and y > z) {
        maksimal = y;
    }else {
        maksimal = z;
    }
    cout << "Bilangan maksimal = " << maksimal << endl;

    return 0;
}
