// Latihan membuat segitiga sama kaki menggunakan looping
#include <iostream>
using namespace std;

int main() {
    // pola kelima
    cout << "Pola ke-5" << endl;
    int n;
    cout << "Masukan panjang segitiga: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
        {
            cout << ' ';
        }
        for(int k = 1; k <= (2 * i - 1); k++)
        {
            cout << '*';
        }
        cout << endl;
    }

    // Penjelasan
    // n = panjang segitiga ke bawahnya
    // i = akan mengikuti nilai n untuk membuat segitiga ke bawahnya dan agar nilainya bisa dimanfaatkan oleh variabel lain
    // j = jumlah spasi agar simbol bintangnya bisa digeser ke kanan
    // k = untuk membuat bintang ke kanan agar bisa membentuk segitiga
    // rumus deret (2 * i - 1) = artinya agar bintang yang keluar selalu berjumlah ganjil agar bisa membentuk segitiga sama kaki

    // pola keenam
    cout << "\nPola ke-6" << endl;
    cout << "Masukan panjang segitiga: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout << ' ';
        }
        for(int k = n; k >= (2 * i - n); k--)
        {
            cout << '*';
        }
        cout << endl;
    }
    
    // Penjelasan
    // n = panjang segitiga ke bawah
    // i = akan mengikuti nilai dari n
    // j = untuk membuat spasi agar bintangnya bisa bergeser ke kanan
    // k = untuk membuat bintang agar membentuk segitiganya
    // rumus deret (2 * i - n) = artinya agar bintang yang keluar selalu berjumlah ganjil agar bisa membentuk segitiga sama kaki

    // pola ketujuh
    cout << "\nPola ke-7" << endl;
    cout << "Masukan panjang segitiga: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
        {
            cout << ' ';
        }
        for(int k = 1; k <= (2 * i - 1); k++)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout << ' ';
        }
        for(int k = n; k >= (2 * i - n); k--)
        {
            cout << '*';
        }
        cout << endl;
    }
    // Penjelasan
    // untuk membuat segitiga ketupat maka kita hanya tinggal menggabungkan segitiga yang atas dengan segitiga yang bawah dan memulai nilai i nya dari 2 pada segitiga yang bawah

    return 0;

}