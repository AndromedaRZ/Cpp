// Fungsi dengan reference
#include <iostream>
using namespace std;

// fungsi prototipenya
void fungsi(int &);
void kuadrat(int &);

int main() {

    int a = 5;
    cout << "nilai dari a   = " << a << endl;
    cout << "address dari a = " << &a << endl;

    fungsi(a);
    kuadrat(a);
    cout << "nilai baru dari a = " << a << endl;

    return 0;
}

void fungsi(int &b)
{
    b = 10;
    cout << "nilai dari b   = " << b << endl; // walaupun nilai dari variabel a berubah
    cout << "address dari b = " << &b << endl; // tetapi memori addressnya masih tetap sama
}

void kuadrat(int &nilaiReference) 
{
    nilaiReference = nilaiReference * nilaiReference; // walaupun nilai dari variabel a sudah dikuadratkan dan berubah
    cout << "address dari a = " << &nilaiReference << endl; // tetapi memori addressnya masih tetap sama
}