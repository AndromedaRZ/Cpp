// Reference
//
// Dalam C++, reference (referensi) adalah nama lain atau alias dari sebuah variabel
// reference tidak menyimpan nilai yang baru, melainkan mengikuti nilai dari variabel yang sudah ada
// variabel asli dengan reference akan saling terhubung dan nilai dari variabelnya akan selalu sama walaupun salah satunya diubah

#include <iostream>
using namespace std;

int main() {

    // variabel
    int a = 5;
    cout << "nilai dari a   = " << a << endl;
    cout << "address dari a = " << &a << endl << endl;

    // reference
    int &b = a; // dengan reference, maka nilai b akan sama dengan nilai a
    cout << "nilai dari b   = " << b << endl;
    cout << "address dari b = " << &b << endl << endl;

    // jika kita mengubah salah satu nilainya, maka nilai lainnya akan berubah juga ( b = a )
    b = 10;
    cout << "nilai dari a   = " << a << endl;
    cout << "address dari a = " << &a << endl;
    cout << "nilai dari b   = " << b << endl;
    cout << "address dari b = " << &b << endl << endl;

    // jika kita mengubah salah satu nilainya, maka nilai lainnya akan berubah juga ( a = b )
    a = 20;
    cout << "nilai dari a   = " << a << endl;
    cout << "nilai dari b   = " << b << endl << endl;
    return 0;
}