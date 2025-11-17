#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Masukan angka: ";
    cin >> a; // memasukan input di atas ke variabel a
    
    // if statement, dalam kurung disebut kondisi yang harus terpenuhi jika ingin if berjalan, sedangkan kurung kurawal adalah statement atau aksi jika kondisinya terpenuhi (jika kondisi menjadi true)
    if (a > 5) // kondisi dalam bentuk boolean, dalam kasus ini if akan menjadi 'true' jika nilai a lebih besar dari angka 5
    {
        cout << "Angka tersebut lebih besar dari 5" << endl; // jika kondisi if terpenuhi, maka statement ini akan berjalan
    }

    cout << "Program Selesai" << endl;
    cin.get();
    return 0;
}