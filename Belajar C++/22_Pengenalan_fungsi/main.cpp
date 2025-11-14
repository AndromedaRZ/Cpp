// Pengenalan fungsi pada bahasa pemrograman c++
// 
// Fungsi atau function adalah bagian kode yang dibuat untuk melakukan tugas tertentu. Dengan fungsi ini, kita tidak perlu menulis kode secara berulang-ulang jika ingin membuat kode yang menghasilkan output yang sama
// 
// 

#include <iostream>
#include <cmath> // mengambil standard libary dari c++ (library matematika)
using namespace std;

/*
library cmath : referensi www.cppreference.com
ceil (x)    <- pembulatan ke atas
cos (x)     <- consinus
exp (x)     <- eksponen
fabs (x)    <- nilai absolut dalam float
floor (x)   <- pembulatan ke bawah
fmod (x)    <- modulus dalam float
log (x)     <- logaritma dengan basis natural
log10 (x)   <- logaritma dengan basis 10
pow (x, y)  <- x pangkat y
sin (x)     <- sinus
sqrt (x)    <- akar kuadrat
tan (x)     <- tangen
*/

int main() {
    int x;
    cout << "menghitung akar dari x: ";
    cin >> x;
    
    // menggunakan fungsi sqrt dari standar library cmath
    double y = sqrt(x);
    cout << "akarnya adalah: " << y << endl;
    cin.get();
    return 0;
}