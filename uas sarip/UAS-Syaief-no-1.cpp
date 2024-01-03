#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool karakter_unik(const string& str) {

    for (size_t i = 0; i < str.length(); i++) {
        for (size_t j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string pass;
    cout << "Inputkan password : ";
    cin >> pass;
    cout << endl;

    if (pass.length() <= 8 && karakter_unik(pass)) {
        bool pass_valid = true;
        string passSave = pass;

        for (char& c : passSave) {
            if (isalpha(c)) {
                c += 2;
            }
            else if (isdigit(c)) {
                c = '0' + (c - '0') * 2;
            }
            else {
                pass_valid = false;
                break;
            }
        }

        if (pass_valid) {
            cout << "Password yang diinputkan: " << pass << endl;
            cout << "Password setelah dikonversi: " << passSave << endl;
        }
        else {
            cout << "Password tidak valid!" << endl;
            cout << "Harus berisi huruf dan angka tanpa pengulangan dan tanpa spasi!" << endl;
        }
    }
    else {
        cout << "Password tidak valid!" << endl;
        cout << "maksimal 8 karakter, huruf dan angka tanpa pengulangan dan tanpa spasi" << endl;
    }

    return 0;
}