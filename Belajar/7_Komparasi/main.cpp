#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 2;
    int c = 3;
    int d = 5;

    bool hasil1, hasil2;

    // komparasi, relation expression

    // sebading ( == )
    hasil1 = a == b;
    cout << hasil1 << endl; // hasilnya akan menjadi 1 atau 'True' jika a dan b nilainya sama

    // tidak sebanding ( != )
    hasil2 = a != b;
    cout << hasil2 << endl; // hasilnya akan menjadi 0 atau 'False' jika a dan b nilainya berbeda

    // lebih dari ( > )
    hasil1 = a > b;
    cout << hasil1 << endl; // hasilnya akan menjadi 1 atau 'True' jika nilai a lebih besar dari b

    // kurang dari ( < )
    hasil2 = a < b;
    cout << hasil2 << endl; // hasilnya akan menjadi 1 atau 'True' jika nilai a lebih kecil dari b

    // lebih dari sama dengan ( >= )
    hasil1 = d > a;
    cout << hasil1 << endl; // hasilnya akan menjadi 1 atau 'True' jika nilai d lebih besar atau sama dengan dari a

    // kurang dari sama dengan ( <= )
    hasil2 = c < d;
    cout << hasil2 << endl; // hasilnya akan menjadi 1 atau 'True' jika nilai c lebih kecil atau sama dengan dari d
    
    return 0;
}