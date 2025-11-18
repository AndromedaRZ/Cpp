// latihan rekursif 2
#include <iostream>
using namespace std;

// prototype
int fibonacci(int n);

int main() {
    
    int angka, hasil;
    cout << "menghitung fibonacci ke : ";
    cin >> angka;
    hasil = fibonacci(angka);

    cout << "fibonacci ke-" << angka << " adalah " << hasil << endl;
    return 0;
}

// rumus fibonacci
// f(n) = f(n-1) + f(n-2)

int fibonacci(int n) {
    cout << "fungsi fibonacci " << n << endl;
    if ((n == 0) or (n == 1)) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}