// Kalkulator sederhana
#include <iostream>
using namespace std;

int main() {
    float angka1, angka2, hasil;
    char aritmatika;

    cout << "Selamat datang di program Kalkulator" << endl;
    
    // memasukan input angka pertama dari user
    cout << "Masukan angka pertama: ";
    cin >> angka1;

    cout << "1. Tambah (+)" << endl;
    cout << "2. Kurang (-)" << endl;
    cout << "3. Kali (x)" << endl;
    cout << "4. Bagi (:)" << endl;
    cout << "Pilih Operator [1-4]: ";
    cin >> aritmatika;

    // memasukan input angka kedua dari user
    cout << "Masukan angka kedua: ";
    cin >> angka2;

    if (aritmatika == '1') {
        hasil = angka1 + angka2;
        aritmatika = '+';
    }
    else if (aritmatika == '2') {
        hasil = angka1 - angka2;
        aritmatika = '-';
    }
    else if (aritmatika == '3') {
        hasil = angka1 * angka2;
        aritmatika = 'x';
    }
    else if (aritmatika == '4') {
        hasil = angka1 / angka2;
        aritmatika = ':';
    }
    else {
        cout << "Operator anda salah!" << endl;
    }
    
    cout << "Hasil perhitungan " << angka1 << ' ' << aritmatika << ' ' << angka2 << " = " << hasil << endl;
    return 0;
}