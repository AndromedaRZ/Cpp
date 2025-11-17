// Latihan membuat segitiga siku-siku dengan menggunakan looping
#include <iostream>
using namespace std;

int main() {

    // Pola pertama
    // n = panjang ke bawah segitiganya
    cout << "Pola ke-1" << endl;
    int n;
    cout << "Masukan panjang segitiga: ";
    cin >> n;

    for (int i = 1; i <= n; i++) // pertama-tama, nilai i akan mengikuti nilai n atau panjang segitiga kebawah yang kita inginkan
    {
        for (int j = 1; j <= i; j++) // lalu for ini akan membentuk bintang ke kanannya menggunakan variabel baru tergantung nilai i dari for sebelumnya
        {
            cout << '*'; // akan mencetak bintangnya sesuai panjang segitiganya (ke kanan)
        }
        cout << endl;
    }
    // singkatnya
    // n = panjang segitiga ke bawahnya
    // i = akan mengikuti panjang segitiga ke bawahnya atau yang membentuk bagian bawahnya
    // j = akan mengikuti panjang segitiga tapi ke kanannya atau yang membentuk bagian kanannya


    // Pola kedua
    cout << "\nPola ke-2" << endl;
    int n;
    cout << "Masukan panjang segitiga: ";
    cin >> n; // nilai n adalah panjang segitiga ke bawahnya

    for(int i = 1; i <= n; i++) // for ini akan membentuk bagian bawah segitiganya menggunakan variabel i dan nilai dari n, semakin banyak nilai n maka akan semakin membentuk ke bawah segitiganya
    {
        for(int j = n; j >= i; j--) // for ini akan membentuk bagian kanan segitiganya, dimulai dengan sesuai dari jumlah nilai n, lalu semakin ke bawah akan semakin mengecil
        {   
            cout << '*';
        }
        cout << endl;
    }

    // Penjelasan
    // n = panjang segitiga ke bawahnya
    // i = akan mengikuti panjang segitiga ke bawahnya atau yang membentuk bagian bawahnya (mengikuti nilai n)
    // j = akan mengikuti panjang segitiga tapi ke kanannya atau yang membentuk bagian kanannya (dari banyak semakin ke bawah semakin berkurang)
    return 0;
}