// While loop
#include <iostream>
using namespace std;

int main() {
    // aturan dalam pengetikan while loop
    // while(syarat=true/false) {
    //      aksi
    // }
    // 

    int a = 1;
    while(a <= 10) // syarat yang harus dipenuhi
    {
        cout << "Berhasil dieksekusi " << a << endl; // aksi ini akan dieksekusi jika syarat di atas terpenuhi, dan program akan kembali berjalan ke while di atas selama syarat masih terpenuhi
        a += 1;
    }
    cout << "Program selesai" << endl;
    return 0;
}