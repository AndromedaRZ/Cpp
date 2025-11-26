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
    cout << "nilai dari a   = " << a << endl;

    return 0;
}

void fungsi(int &b)
{
    b = 10;
    cout << "nilai dari b   = " << b << endl;
    cout << "address dari b = " << &b << endl;
}

void kuadrat(int &nilaiReference) 
{
    nilaiReference = nilaiReference * nilaiReference;
}