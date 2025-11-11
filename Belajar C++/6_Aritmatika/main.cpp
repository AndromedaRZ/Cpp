#include <iostream>
using namespace std;

int main() {
    int a = 6;
    int b = 4;
    int hasil; // sebuah variabel harus dideklarasikan terlebih dahulu

    // operator aritmatika +, -, *, /, %
    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << " : " << b << " = " << hasil << endl;

    // modulus/sisa pembagian bulat
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl; // hasil pembagiannya akan menjadi bilangan bulat karena yang dijumlahkan adalah bilangan bulat atau integer, bukan float, modulus akan error jika salah satu bilangan adalah float
    
    // urutan eksekusi, operasi mana yang akan dijalankan terlebih dahulu jika digabung
    // 1. ()
    // 2. *
    // 3. /
    // 4. +
    // 5. -

    hasil = (a + b) * a;
    cout << hasil << endl;
    return 0;

}