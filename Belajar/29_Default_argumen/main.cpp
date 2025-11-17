// Defult argumen
//
// Yaitu nilai default argumen dalam fungsi jika kita tidak menginput nilainya
//

#include <iostream>
using namespace std;

// fungsi prototipe
double volume_kubus(double panjang, double lebar, double tinggi = 2);



int main() {

    cout << "volume kubus: " << volume_kubus(3,5,6) << endl;
    cout << "volume kubus: " << volume_kubus(3,5) << endl; // fungsi ini akan menggunakan nilai default argumen ke 3 karena kita tidak menginputnya saat memanggi fungsinya
    return 0;
}

// default argumen atau nilai standarnya
double volume_kubus(double panjang, double lebar, double tinggi)
{
    return panjang * lebar * tinggi;
}
