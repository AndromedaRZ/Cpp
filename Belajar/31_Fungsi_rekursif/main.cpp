// Fungsi Rekursif
#include <iostream>
using namespace std;

// fungsi rekursif adalah fungsi yang memanggil (mengulangi) dirinya sendiri di dalam fungsi tersebut 
// Rekursif -> Pengulangan (di dalam fungsi)

// fungsi rekursif terbatas
int pangkatIterasi(int a, int b) {
    int hasil = a;
    for(int i = 1; i < b; i++) {
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b) {
    if (b <= 1) {
        cout << "akhir dari rekursif" << endl;
        return a;
    } else {
        cout << "rekursif" << endl;
        return a * pangkatRekursif(a, (b - 1));
    }
}


int main() {
    int a;
    int b;
    cout << "angka: ";
    cin >> a;
    
    cout << "pangkat: ";
    cin >> b;

    cout << "hasil iterasi: " << pangkatIterasi(a, b) << endl;
    cout << "hasil rekursif: " << pangkatRekursif(a, b) << endl;
    return 0;
}