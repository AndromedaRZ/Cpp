// Pointer
// 
// Dalam bahasa c++, pointer adalah variabel yang menyimpan address memori dari variabel lain - bukan nilainya langsung
// cara membuat pointer adalah dengan menambahkan bintang di sebelah kiri variabel saat dideklarasikan, contoh = *nama_variabel
// cara mengambil memori address dari variabel biasa adalah dengan menambahkan simbol 'dan' (&) di sebelah kiri variabel
// cara mengambil nilai dari variabel pointer adalah dengan menambahkan simbol bintang (*) diawal variabel pointernya saat ingin dipanggil, contoh = *nama_variabel


#include <iostream>
using namespace std;

// membuat fungsi untuk menukar nilai dari suatu variabel menggunakan pointer
// caranya dengan menukar memori addressnya bukannya nilai dari variabelnya
void tukar(int *a, int *b) 
{
    int temp;
    temp = *a; // temp = nilai asli dari a
    *a = *b; // a = nilai asli dari b
    *b = temp; // b = nilai asli dari a 
}


// membuat fungsi biasa untuk menukar nilai a dan b
void tukar_gagal(int a, int b)
{
    int temp;
    temp = a; // temp = 5
    a = b; // a = 20
    b = temp; // b = 5
}

int main() {
    int a = 5;

    // cara membuat pointer
    int *aPtr = &a; // variabel aPtr akan menyimpan memori address dari variabel a (&a)

    // jika kita mendeklarasikan sebuah variabel baru dengan nilai yang sama dengan variabel lain, maka addressnya tetap berbeda
    int b = a;

    // cara membuat pointer kosong (tidak ada addressnya)
    int x = 10;
    int *xPtr = nullptr;

    // mengambil nilai dari a
    cout << "nilai dari a = " << a << endl;
    
    // cara mengambil address atau alamat dari variabelnya
    cout << "alamat dari a = " << &a << endl;

    // deferencing, mengambil nilai asli dari pointer aPtr (atau nilai dari memori address a tadi)
    cout << "nilai asli dari pointer a (aPtr) = " << *aPtr << endl;

    // cara mengambil nilai dari pointer aPtr (isinya akan berupa address dari a)
    cout << "nilai dari pointer a (aPtr) = " << aPtr << endl << endl;
    
    // memanggil pointer atau address yang kosong
    cout << "pointer x kosong = " << xPtr << endl << endl;

    // mengambil nilai dari variabel b
    cout << "nilai dari b = " << b << endl;

    // mengambil address atau alamat dari b (addressnya akan berbeda dengan yang a walaupun memiliki nilai yang sama)
    cout << "alamat dari b = " << &b << endl;
    
    b = 20;
    // mengambil nilai dari variabel b
    cout << "nilai baru dari b = " << b << endl;

    // mengambil address atau alamat dari b (walaupun nilai b sudah berubah, tetapi addressnya masih sama seperti sebelumnya)
    cout << "alamat baru dari b = " << &b << endl << endl;
    
    tukar_gagal(a, b);
    // mengambil nilai dari variabel a
    cout << "nilai baru dari a = " << a << endl;
    // mengambil nilai dari variabel b
    cout << "nilai baru dari b = " << b << endl << endl;

    tukar(&a, &b);
    // mengambil nilai dari variabel a
    cout << "nilai baru dari a = " << a << endl;
    // mengambil nilai dari variabel b
    cout << "nilai baru dari b = " << b << endl;
    
    return 0;   
}