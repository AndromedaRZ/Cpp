// latihan rekursif
#include <iostream>
using namespace std;

// agar bisa memahami rekursif lebih jelas lagi
// kita akan menggunakan faktorial sebagai studi kasus

// prototype
int faktorial(int n);


int main() {

    int angka, hasil;
    cout << "angka: ";
    cin >> angka;

    hasil = faktorial(angka);
    cout << "nilai faktorial dari angka " << angka << " adalah " << hasil << endl;

    return 0;
}

// rumus faktorial
// n! = n * (n - 1) dilakukan berulang kali sampai nilai n = 1
// 5! = 5 x 4 x 3 x 2 x 1 = 120
// 4! = 4 x 3 x 2 x 1 = 24
// 3! = 3 x 2 x 1 = 6

int faktorial(int n) {
    if(n <= 1) {
        cout << n << endl;
        return n;
    } else {
        cout << n << '*';
        return n * faktorial(n - 1);
    }
}