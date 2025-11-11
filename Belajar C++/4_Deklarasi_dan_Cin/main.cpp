#include <iostream>
using namespace std; // jika menggunakan 'using namespace std' ini, maka saat menggunakan standard library-nya kita tidak perlu lagi mengetikan 'std::'

int main() {
    int a; // deklarasi sebuah variabel
    a = 10; // memasukan nilai/value ke dalam sebuah variabel (assignment)
    int a = 10; // bisa juga deklarasi dan assignment disatukan
    cout << a << endl;

    int b;
    cout << "Masukan nilai: ";
    cin >> b; // memasukan nilai/value ke dalam sebuah variabel dengan menggunakan input user
    cout << "Nilai yang anda masukan adalah: ";
    cout << b << endl;

    cin.get();
    return 0;
}