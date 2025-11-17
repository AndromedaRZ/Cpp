// Prototipe fungsi
//
// Yaitu fungsi yang dideklarasikan sebelum didefinisikan
// tujuannya yaitu agar compiler tahu bentuk suatu fungsi terlebih dahulu sebelum fungsi itu dipanggil
// tanpa prototipe, jika fungsi dipanggil sebelum definisinya, compiler bisa error karena tidak tahu tipe parameter dan return value fungsi tersebut
//

#include <iostream>
using namespace std;

// fungsi prototipe
double hitung_luas(double panjang, double lebar);
void println(double nilai);

int main() {    

    double panjang, lebar, luas;
    cout << "panjang persegi: ";
    cin >> panjang;

    cout << "lebar persegi: ";
    cin >> lebar;
    luas = hitung_luas(panjang, lebar);

    // memanggil fungsi prototipe
    println(luas);
    return 0;
}

// fungsi biasa, didefinisikan sesudah dideklarasikan di atas dan dipanggil 
double hitung_luas(double panjang, double lebar) {
    return panjang * lebar;
}

void println(double nilai) {
    cout << "luasnya adalah: " << nilai << endl;
}