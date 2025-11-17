// Increment dan Decrement
#include <iostream>
using namespace std;

int main() {
    // increment dan decrement
    // ada dua increment
    // pre-increment/sebelum dan post-increment/sesudah

    int a = 10;
    int b = 5;

    // post-increment
    // artinya, 'post-increment' akan print nilainya terlebih dahulu baru dijumlahkan nilainya
    cout << "Nilai awal a: " << a << endl;
    cout << "Post-increment: " << a++ << endl;
    cout << "Nilai baru a: " << a << endl << endl;

    // pre-increment
    // artinya, 'pre-increment' akan menjumlahkan nilainya terlebih dahulu baru di print nilainya
    cout << "Nilai awal a: " << a << endl;
    cout << "Pre-increment: " << ++a << endl;
    cout << "Nilai baru a: " << a << endl << endl;
    
    // post-decrement
    // artinya, 'post-decrement' akan print nilainya terlebih dahulu naru dikurangi nilainya
    cout << "Nilai awal b: " << b << endl;
    cout << "Post-increment: " << b-- << endl;
    cout << "Nilai baru b: " << b << endl << endl;
    
    // pre-decrement
    // artinya, 'pre-decrement' akan mengurangi nilainya terlebih dahulu baru di print nilainya
    cout << "Nilai awal b: " << b << endl;
    cout << "Pre-increment: " << --b << endl;
    cout << "Nilai baru b: " << b << endl << endl;

    // perbedaan kedua metode di atas adalah penempatan operasinya.
    // 'post' diletakan setelah variabelnya (a++), diprint terlebih dahulu baru dioperasikan
    // 'pre' diletakan sebelum variabelnya (--b), dioperasikan terlebih dahulu baru diprint

    return 0;
}