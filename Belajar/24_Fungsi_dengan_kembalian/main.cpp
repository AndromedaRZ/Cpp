// Fungsi dengan kembalian (return)
#include <iostream>
using namespace std;

// cara membuat fungsi/functionnya
// tipe_data(output/hasil) nama_fungsi(argumen=input)
// {
//  isi fungsinya;
//  return hasil fungsinya;
// }
// sebelum int main() {}

// membuat fungsi kuadrat
int kuadrat(int x) // 'int' sebagai output tipe data yang akan dihasilkan fungsinya, 'kuadrat' sebagai nama fungsinya, dan '(int x)' sebagai argumen atau input usernya
{
    int hasil; // deklarasi untuk output fungsinya
    hasil = x * x; // statement fungsinya
    return hasil; // mengembalikan atau return hasil fungsinya agar bisa keluar
}

// membuat fungsi tambah (2 input)
int tambah(int x, int y)
{
    int z;
    z = x + y;
    return z;
}


int main() {
    int input, hasil, a, b;
    cout << "masukan angka: ";
    cin >> input;
    hasil = kuadrat(input); // menggunakan fungsinya
    cout << "kuadrat " << input << " adalah: " << hasil << endl;

    cout << "masukan nilai a: ";
    cin >> a;
    cout << "masukan nilai b: ";
    cin >> b;
    hasil = tambah(a, b);
    cout << a << " + " << b << " = " << hasil << endl;

    cin.get();
    return 0;
}