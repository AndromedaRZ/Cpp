// Fungsi dengan pointer
#include <iostream>
using namespace std;

// prototype fungsinya
void fungsi(int *);
void kuadrat(int *);

int main() {

    int a = 5;

    cout << "nilai dari a = " << a << endl;
    cout << "address dari a = " << &a << endl;
    fungsi(&a); // fungsi dengan input pointer

    kuadrat(&a);
    cout << "nilai dari a = " << a << endl;

    return 0;
}

void fungsi(int *b) {
    cout << "nilai dari b = " << *b << endl; // dereference atau mengambil nilai dari pointer
    cout << "address dari b = " << b << endl;
} 

void kuadrat(int *valPtr) {
    *valPtr = (*valPtr) * (*valPtr); // menggunakan pointer untuk mengkuadratkan suatu bilangan, jika menggunakan variabel biasa maka nilai integernya tidak akan bisa dikalikan dengan nilainya seniri
}