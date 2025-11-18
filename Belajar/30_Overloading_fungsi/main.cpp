// overloading function
#include <iostream>
using namespace std;

// overloading = menimpa

// basic function
int luas_kotak(int panjang, int lebar) 
{
    int luas = panjang * lebar;
    return luas;
}

// overload function 1
int luas_kotak(int panjang)
{
    int luas = panjang * panjang;
    return luas;
}

// overload function 2
double luas_kotak(double sisi) 
{
    return sisi * sisi;
}

int main() {

    cout << "luas kotak 3x2 = " << luas_kotak(3, 2) << endl; // menggunakan basic function
    cout << "luas kotak 2x2 = " << luas_kotak(2) << endl; // menggunakan fungsi overload pertama
    cout << "luas kotak 2.5x2.5 = " << luas_kotak(2.5) << endl; // menggunakan fungsi overload kedua

    // setiap penggunaan fungsi luas kotak di atas akan menyesuaikan dengan input yang dimasukan
    // luas kotak pertama = menggunakan basic function karena 2 argumen yang diberikan sesuai dengan fungsinya
    // luas kotak kedua = menggunakan overload function pertama karena 1 argumen yang diberikan sesuai dengan fungsinya
    // luas kotak ketiga = menggunakan overload function kedua karena 1 argumen nilai double yang diberikan sesuai dengan fungsinya
    return 0;
}