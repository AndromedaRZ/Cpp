// Latihan deret fibonacci
// 
// fibonacci -> deret, yaitu angka yang baru akan dijumlahkan dengan angka sebelumnya
// contoh: 1, 1, 2, 3, 5, 8, 13
// penjelasan: 1, 1 = 1 + 0, 2 = 1 + 1, 3 = 2 + 1, 5 = 3 + 2, 8 = 5 + 3 dan seterusnya  
// 
// rumus fibonacci: f(n) = f(n-1) + f(n-2)
// n = fibo ke-berapa, setiap angka di atas disebut n dari fibo
//

#include <iostream>
using namespace std;

int main() {

    // rumus: f(n) = f(n-1) + f(n-2)
    // inisialisasi variabel
    int n;
    int f_n;
    int f_n1;
    int f_n2;

    cout << "Program deret fibonacci" << endl;
    cout << "Masukan nilai ke-n: ";
    cin >> n;


    // perhitungan awal fibonacci
    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2; // rumus awal
    cout << f_n << " "; // print nilai pertama
    for (int i = 1; i < n; i++) {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1; // menginisialisasi f(n-2)
        f_n1 = f_n; // menginisialisasi f(n-1)
        cout << f_n << " ";
    }
    return 0;
}