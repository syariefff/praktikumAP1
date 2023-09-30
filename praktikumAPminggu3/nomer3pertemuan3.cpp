#include <iostream>
using namespace std;

int main () {
  float angka1, angka2, hasil ;
  char operasi ;

  cout<< "Masukkan Angka Pertama:";
  cin>>angka1;
  cout<< endl;

  cout<< "Masukkan Pengoperasian (+,-,*,/):" ;
  cin>> operasi ;
  cout<< endl;

  cout<< "Masukkan Angka Kedua:";
  cin>> angka2; 
  cout<<endl;

  if (operasi == '+'){
    hasil = angka1 + angka2 ;
   }else if (operasi == '-'){
     hasil = angka1 - angka2 ;
   }else if (operasi == '*'){
     hasil = angka1 * angka2;
   }else if (operasi == '/') {
      if (angka2 != 0) {
         hasil = angka1 / angka2;
   } else {
     cout << "Pembagian nol tidak diperbolehkan." << endl;
    return 1;
        }
   } else {
     cout << "Operasi yang anda masukkan tidak valid." << endl;
        return 1;
    }
    cout << "Hasil dari " << angka1 << operasi << angka2 << " = " << hasil << endl;

    return 0;
}
    

  

