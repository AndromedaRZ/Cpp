// For loop
#include <iostream>
using namespace std;

int main() {
    // aturan dalam pengetikan for loop
    // 
    // for(inisialisasi; loop kondisi (for loop akan berjalan sesuai kondisi yang kita tentukan); increment) {
    //  statement
    // }
    
    // contoh for loop pertama
    cout << "loop 1" << endl;
    cout << "awal for loop" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    cout << "akhir dari loop \n" << endl;

    // dalam contoh loop pertama di atas
    // 'int i = 1' berfungsi sebagai nilai awal suatu variabel atau disebut inisialisasi
    // 'i <= 10' adalah kondisi yang harus terpenuhi agar kode disebelah kanannya bisa berjalan
    // 'i++' atau increment dalam kasus ini berfungsi sebagai aksi yang dilakukan saat kondisi terpenuhi
    // dan terakhir kode di dalam statement akan berjalan setelah ketiga bagian yang ada di atasnya berjalan

    // contoh for loop kedua, menggunakan assignment operator (i += 2)
    cout << "loop 2" << endl;
    cout << "awal for loop" << endl;
    for(int i = 1; i <= 10; i += 2) {
        cout << i << endl;
    }
    cout << "akhir dari loop \n" << endl;

    // contoh for loop ketiga
    cout << "loop 3" << endl;
    cout << "awal for loop" << endl;
    for(int i = 1; i >= -10; i--) {
        cout << i << endl;
    }
    cout << "akhir dari loop \n" << endl;

    // contoh for loop keempat
    cout << "loop 4" << endl;
    int total = 0;
    cout << "awal for loop" << endl;
    for(int i = 1; i <= 10; i++, total += i) {
        cout << i << " || " << total << endl;
    }
    cout << "akhir dari loop \n" << endl;

    return 0;
}