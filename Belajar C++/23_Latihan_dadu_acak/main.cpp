// Latihan membuat program dadu acak

#include <iostream>
#include <cstdlib> // memanggil fungsi random built-in ke file c++ ini
using namespace std;

int main() {
    
    char lanjut;
    while(true) {
        cout << "Lempar dadu? (y/n): ";
        cin >> lanjut;
        
        if (lanjut == 'y') {
            cout << 1 + rand() % 6 << endl; // memanggil fungsi randomnya, (1 + rand() % 6) berfungsi untuk mengenerate nilai random dari 1 sampai 6
        } else if (lanjut == 'n') {
            break;
        } else {
            cout << "Input yang dimasukan salah!" << endl;
        }

    }

    cout << "Akhir dari program" << endl;
    cin.get();
    return 0;
}
