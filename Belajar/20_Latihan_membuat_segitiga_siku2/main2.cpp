// Latihan membuat segitiga siku-siku dengan menggunakan looping bagian 2
#include <iostream>
using namespace std;

int main() {
    // Pola ketiga
    cout << "Pola ke-3" << endl;
    int n;
    cout << "Masukan panjang segitiga: ";
    cin >> n;

    for(int i = 1; i <= n; i++) // for ini akan membentuk segitiga ke bawahnya
    {
        for(int j = 1; j < i; j++) // for akan membentuk spasinya untuk membuat bintangnya bergeser ke kanan
        {
            cout << ' ';
        }
        for(int k = n; k >= i; k--) // for ini akan membentuk bintang ke kanan untuk membuat segitiganya
        {
            cout << '*';
        }
        cout << endl;
    }

    // Penjelasan 
    // n = panjang segitiga ke bawahnya
    // i = akan mengikuti panjang segitiga ke bawah yang membentuk bagian bawahnya (sesuai nilai n)
    // j = akan membuat spasi untuk membuat bintangnya ke kanan (akan semakin bertambah sesuai panjang segitiga ke bawahnya atau sesuai nilai i)
    // k = akan membuat bintang ke kanannya sesuai nilai dari i (semakin ke bawah segitiganya maka semakin berkurang nilai dan bintang yang membentuk segitiganya) 

    cout << "\nPola ke-4" << endl;
    cout << "Masukan panjang segitiga: ";
    cin >> n;

    for(int i = 1; i <= n; i++) // for ini akan membentuk segitiga ke bawahnya sesuai nilai dari n
    {
        for(int j = n; j > i; j--) // for ini akan membentuk spasi untuk menggeser bintangnya ke kanan agar membentuk segitiganya
        {
            cout << ' ';
        }
        for(int k = 1; k <= i; k++) // for ini akan membentuk bintangnya agar bisa membuat segitiganya
        {
            cout << '*';
        }
        cout << endl;
    }

    // Penjelasan
    // n = panjang segitiga ke bawahnya
    // i = akan mengikuti panjang segitiga ke bawah yang membentuk bagian bawahnya (sesuai nilai n)
    // j = akan membuat spasi untuk membuat bintangnya ke kanan (akan semakin berkurang sesuai panjang segitiga ke bawahnya atau sesuai nilai i)
    // k = akan membuat bintang ke kanannya sesuai nilai dari i (semakin ke bawah segitiganya maka semakin bertambah nilai dan bintang yang membentuk segitiganya) 
    return 0;
}