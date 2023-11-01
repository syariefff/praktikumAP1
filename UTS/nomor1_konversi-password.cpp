#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool karakterUnik(const string& str) {
    
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
    string password;
    cout << "Masukkan password : ";
    cin >> password ;
    cout << endl ;

    if (password.length() <= 8 && karakterUnik(password)) {
        bool passwordValid = true;
        string passwordTersimpan = password;

        for (char& c : passwordTersimpan) {
            if (isalpha(c)) {
                c += 2;
            } else if (isdigit(c)) {
                c = '0' + (c - '0') * 2;
            } else {
                passwordValid = false;
                break;
            }
        }

        if (passwordValid) {
            cout << "Password yang dimasukkan: " << password << endl;
            cout << "Password setelah konversi: " << passwordTersimpan << endl;
        } else {
            cout << "Password tidak valid!" << endl;
            cout << "Harus berisi huruf dan angka tanpa pengulangan dan tanpa spasi!" << endl;
        }
    } else {
        cout << "Password tidak valid!" << endl;
        cout << "Harus maksimal 8 karakter, huruf dan angka tanpa pengulangan dan tanpa spasi" << endl;
    }

    return 0;
}