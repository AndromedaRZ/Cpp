// Pendahuluan Array

// Array bisa disebut sebagai kumpulan data, dalam c++ array bisa berisi berbagai data dengan tipe yang sama dan addressnya tersusun berurutan.
// Singkatnya seperti list dalam bahasa pemrograman python. Index array dimulai dari 0 (zero-based), jadi urutan ke-1 = 0, urutan ke-2 = 1 dan seterusnya.
// cara membuat array adalah dari kiri dengan menuliskan deklarasi tipe datanya dilanjut nama variabelnya dan sebuah kurung persegi, contoh = int nilai[5]

#include <iostream>
using namespace std;

main() {

    // ada dua cara membuat array
    int nilai[5]; // isinya tidak menentu karena hanya dideklarasikan tidak diinisialisasi
    int nilai2[5] = {6, 7, 8, 9, 10}; // deklarasi sekaligus menginisialisasi isinya

    // menginisialisasi isi dari array-nya secara terpisah
    nilai[0] = 1;
    nilai[1] = 2;
    nilai[2] = 3;
    nilai[3] = 4;
    nilai[4] = 5;

    // nilai 1
    cout << "nilai = " << nilai[0] << " address = " << &nilai[0] << endl;
    cout << "nilai = " << nilai[1] << " address = " << &nilai[1] << endl;
    cout << "nilai = " << nilai[2] << " address = " << &nilai[2] << endl;
    cout << "nilai = " << nilai[3] << " address = " << &nilai[3] << endl;
    cout << "nilai = " << nilai[4] << " address = " << &nilai[4] << endl << endl;

    // nilai 2
    cout << "nilai = " << nilai2[0] << " address = " << &nilai2[0] << endl;
    cout << "nilai = " << nilai2[1] << " address = " << &nilai2[1] << endl;
    cout << "nilai = " << nilai2[2] << " address = " << &nilai2[2] << endl;
    cout << "nilai = " << nilai2[3] << " address = " << &nilai2[3] << endl;
    cout << "nilai = " << nilai2[4] << " address = " << &nilai2[4] << endl << endl;
    
    // pointer dalam array
    int *ptr = nilai;
    *(ptr + 2) = 6;

    nilai[3] = 7;

    cout << "nilai = " << nilai[0] << " address = " << &nilai[0] << endl;
    cout << "nilai = " << nilai[1] << " address = " << &nilai[1] << endl;
    cout << "nilai = " << nilai[2] << " address = " << &nilai[2] << endl;
    cout << "nilai = " << nilai[3] << " address = " << &nilai[3] << endl;
    cout << "nilai = " << nilai[4] << " address = " << &nilai[4] << endl << endl;


    return 0;
}