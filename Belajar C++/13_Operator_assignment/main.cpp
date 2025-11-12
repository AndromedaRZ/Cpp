// Operator assignment
#include <iostream>
using namespace std;

int main() {

    // assignment
    int a = 10;
    cout << "Nilai awal a: "<< a << endl;
    a = a + 3;
    cout << "Nilai baru a: " << a << endl;

    // assignment operator
    // kita bisa menggunakan operator assignment seperti berikut
    int b = 5;
    cout << "Nilai awal b: " << b << endl;
    b += 10; // jadi tidak perlu mengetik b = b + 10
    cout << "Nilai baru b: " << b << endl;

    int c = 1;
    cout << "Nilai awal c: " << c << endl;

    c += 2;
    cout << "c + 2: " << c << endl;

    c -= 2;
    cout << "c - 2: " << c << endl;

    c *= 3;
    cout << "c * 3: " << c << endl;
    return 0;
}