// Switch adalah struktur percabangan yang hampir sama dengan if, tapi digunakan saat banyaknya pilihan kondisi berdasarkan satu nilai
// dengan switch, kita bisa membuat kode agar lebih rapi dan singkat dibandingkan dengan menggunakan if-else berulang-ulang

#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Masukan nilai antara 1-5: ";
    cin >> a;

    switch(a) // setelah switch, kita bisa memasukan nilai yang akan dicek kondisinya
    {
        case 1: // case ini akan tereksekusi jika kondisi dalam switch memenuhi kondisi case ini
            cout << "Angka tersebut adalah 1" << endl;
            break; // gunakan break agar saat kondisi case ini terpenuhi, tidak mengganggu kondisi case dibawahnya
        case 2: // case ini akan tereksekusi jika kondisi dalam switch memenuhi kondisi case ini
            cout << "Angka tersebut adalah 2" << endl;
            break;
        case 3: // case ini akan tereksekusi jika kondisi dalam switch memenuhi kondisi case ini
            cout << "Angka tersebut adalah 3" << endl;
            break;
        case 4: // case ini akan tereksekusi jika kondisi dalam switch memenuhi kondisi case ini
            cout << "Angka tersebut adalah 4" << endl;
            break;
        case 5: // case ini akan tereksekusi jika kondisi dalam switch memenuhi kondisi case ini
            cout << "Angka tersebut adalah 5" << endl;
            break;
        default: // default ini akan tereksekusi jika kondisi casenya tidak ada yang terpenuhi
            cout << "Angka tersebut tidak ditemukan!" << endl;

    }

    cout << "Akhir dari program";

    return 0;
}