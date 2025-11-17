#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = 2;
    bool hasil;

    // operator logika : not, and, or
    cout << "1 = True\n";
    cout << "0 = False\n\n";

    // not ( != )
    cout << "not" << endl;
    hasil = !(a == 3); // akan menjadi 1 atau true jika nilai a bukan 3
    cout << "a not 3 = " << hasil << endl;
    cout << "a" << " != " << 3 <<  " = " << hasil << "\n" << endl;
    
    // and (&&), akan true jika kedua nilai bernilai true
    cout << "and" << endl;
    hasil = (a == 3) and (b == 2);
    cout << "a == 3 : True and b == 2 : True = " << hasil << endl; // true dan true
    hasil = (a == 3) and (b == 3);
    cout << "a == 3 : True and b == 3 : False = " << hasil << endl; // true dan false
    hasil = (a == 4) && (b == 2);
    cout << "a == 4 : False && b == 2 : True = " << hasil << endl; // false dan true
    hasil = (a == 4) && (b == 3);
    cout << "a == 4 : False && b == 3 : False = " << hasil << "\n" << endl; // false dan false

    // or (||), akan true jika kedua nilai atau salah satunya bernilai true dan akan false jika kedua nilainya adalah false
    cout << "or" << endl;
    hasil = (a == 3) or (b == 2);
    cout << "a == 3 : True or b == 2 : True = " << hasil << endl; // true dan true
    hasil = (a == 3) or (b == 3);
    cout << "a == 3 : True or b == 3 : False = " << hasil << endl; // true dan false
    hasil = (a == 4) || (b == 2);
    cout << "a == 4 : False || b == 2 : True = " << hasil << endl; // false dan true
    hasil = (a == 4) || (b == 3);
    cout << "a == 4 : False || b == 3 : False = " << hasil << endl; // false dan false

    return 0;
}