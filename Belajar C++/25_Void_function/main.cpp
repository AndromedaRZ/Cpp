// function void
// 
// void termasuk ke dalam tipe data 
//
// void nama_fungsi(input)
// {
//  statement fungsinya, tidak memerlukan return
// }
//
// ada yang bilang void function itu sebagai worker atau hanya menjalankan suatu fungsi bukan mengembalikan hasil dari fungsi tersebut

#include <iostream>
using namespace std;

void tampilkan(int input)
{
    cout << input << endl;
}

// contoh void function
void sapa(string nama)
{
    cout << "Halo, apa kabar " << nama << "?" << endl;
}


int main() {
    int nilai = 5;
    tampilkan(nilai);
    sapa("Rizky");

    return 0;
}