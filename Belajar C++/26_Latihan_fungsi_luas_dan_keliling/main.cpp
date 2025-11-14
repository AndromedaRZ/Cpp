// Latihan membuat fungsi luas dan keliling persegi panjang
#include <iostream>
using namespace std;

// fungsi menghitung luas persergi panjang
double hitung_luas(double panjang, double lebar)
{
    double luas = panjang * lebar;
    return luas;
}

// fungsi menghitung keliling persegi panjang
double hitung_keliling(double panjang, double lebar)
{
    double keliling = 2 * (panjang + lebar);
    return keliling;
}

// fungsi menampilkan hasil luas persegi panjang
void tampilkan_luas(double panjang, double lebar)
{   
    cout << "\nMenggunakan void" << endl;
    cout << "luasnya adalah: ";
    cout << hitung_luas(panjang, lebar) << endl;
}

// fungsi menampilkan hasil keliling persegi panjang
void tampilkan_keliling(double panjang, double lebar)
{   
    cout << "\nMenggunakan void" << endl;
    cout << "kelilingnya adalah: ";
    cout << hitung_keliling(panjang, lebar) << endl;
}


int main() {
    double panjang, lebar;
    cout << "panjang persegi panjang: ";
    cin >> panjang;
    
    cout << "lebar persegi panjang: ";
    cin >> lebar;

    tampilkan_luas(panjang, lebar);
    tampilkan_keliling(panjang, lebar);

    return 0;
}