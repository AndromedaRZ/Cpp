// Break dan continue
#include <iostream>
using namespace std;

int main() {


    // contoh penggunaan break (keluar dari loop)
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5) // kita buat suatu kondisi dimana jika nilai i = 5, maka for loop akan berhenti dengan menggunakan 'break' dan statement for loop seterusnya tidak akan dijalankan
        {
            break;
        }
        cout << "Nilai i = " << i << endl; // statement for loop 
    }

    cout << "\n";

    // contoh penggunaan continue
    for (int a = 0; a >= -10; a--)
    {
        if (a == -5) // kita buat suatu kondisi dimana jika nilai a = -5, maka statement for loop saat ini tidak akan dijalankan atau diskip dan for loop memulai kembali loopnya dari atas, alhasil nilai a = -5 tidak akan diprint karena statementnya tidak berjalan (diskip)
        {
            continue;
        }
        cout << "Nilai a = " << a << endl;
    }

    // contoh break pada while loop
    cout << "\n";
    int b = 0;
    while(b <= 10) // while loop akan tetap berjalan sampai kondisi ini tidak terpenuhi atau dihentikan oleh break
    {
        if (b == 8) // kita buat suatu kondisi dimana jika nilai b = 8, maka while loop akan berhenti karena 'break'
        {
            break;
        }
        cout << "Nilai b = " << b << endl;
        b++;
    }

    // contoh continue pada while loop
    cout << "\n";
    int c = 0;
    while(c <= 10) // while loop akan tetap berjalan sampai kondisi ini tidak terpenuhi
    {
        c++;
        if (c == 8) // kita buat suatu kondisi dimana jika nilai c = 8, maka while loop akan mengskip statement saat ini dan lanjut ke loop berikutnya, alhasil nilai c = 8 tidak akan muncul
        {
            continue;
        }
        cout << "Nilai c = " << c << endl;
        // c++; // PERINGATAN, jangan menaruh incrementnya atau aksi nya di sini karena while loopnya tidak akan pernah selesai eksekusinya
    }

    cout << "akhir dari program" << endl;


    return 0;
}