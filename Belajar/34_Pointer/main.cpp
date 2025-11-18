// Pointer
// 
// Dalam bahasa c++, pointer adalah variabel yang menyimpan alamat memori dari variabel lain - bukan nilainya langsung
// cara membuat pointer adalah dengan menambahkan bintang di sebelah kiri variabel saat dideklarasikan, contoh = *nama_variabel
// cara mengambil address atau alamat dari variabel adalah dengan menambahkan simbol dan (&) di sebelah kiri variabel

#include <iostream>
using namespace std;

int main() {
    int a = 5;

    // pointer
    int *aPtr = &a;

    // pointer kosong
    int x = 10;
    int *xPtr = nullptr;

    // int a mempunyai nilai dan address (alamat)
    cout << "nilai dari a = " << a << endl;
    // cara mengambil address atau alamat dari variabelnya
    cout << "alamat dari a = " << aPtr << endl;

    // memanggil pointer atau alamat yang kosong
    cout << "pointer x kosong = " << xPtr << endl;

    // dereferencing, mengambil data dari sebuah pointer
    cout << "mengambil nilai dari pointer aPtr : " << *aPtr << endl; 

    return 0;
}