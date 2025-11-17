#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Masukan angka: ";
    cin >> a; // memasukan input di atas ke variabel a
    
    if (a > 5) // jika kondisi if ini terpenuhi, maka statement di bawahnya akan berjalan 
    {
        cout << "Angka tersebut lebih besar dari 5" << endl;
    }
    else if (a < 0) // kita juga bisa menambahkan kondisi 'else if' sebelum else untuk membuat kondisi dan statement baru
    {
        cout << "Angka tersebut sudah masuk ke dalam angka mines" << endl;
    }
    else // jika kondisi kedua if di atas tidak terpenuhi, maka statement di bawah ini akan berjalan
    {
        cout << "Angka tersebut tidak lebih besar dari 5" << endl;
    } 

    cout << "Program Selesai" << endl;
    cin.get();
    return 0;
}