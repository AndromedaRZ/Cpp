// Do while loop
#include <iostream>
using namespace std;

int main() {
    // aturan dalam pengetikan do while loop
    // do { 
    //      aksi
    // } while (syarat);
    //
    // do while loop akan eksekusi 'aksi' nya terlebih dahulu lalu dieksekusi 'syaratnya'


    int a = 1;
    do // do akan tereksusi terlebih dahulu, dan do akan tereksekusi minimal sekali
    {
        cout << "Loop ke-" << a << endl; 
        a++;
    }
    while(a < 5); // while baru akan tereksekusi setelah do pertama kali berjalan

    cout << "Program selesai" << endl;
    return 0;
}