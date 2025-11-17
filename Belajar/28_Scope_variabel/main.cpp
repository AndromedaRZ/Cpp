// Scope variabel
#include <iostream>
using namespace std;

// Global scope, variabel yang dibuat di luar fungsi manapun dan bisa diakses dari dalam maupun luar fungsi
// Lokal scope, variabel yang dibuat di dalam fungsi dan hanya bisa diakses dari dalam fungsi tersebut
// Block scope, variabel yang dibuat di dalam tanda kurung kurawal {} manapun, termasuk yang di dalam if, for dan while,

// global scope
int x = 10;

// fungsi untuk mengambil nilai global scope dari dalam fungsi main()
int get_global() {
    return x; // mengambil variabel global
}

// nama variabel yang sama tetapi berada di dalam fungsi
int x_local() {
    int x = 5; // walaupun nama variabelnya sama, tetapi tidak akan menggangu global variabel karena x ini hanya di dalam fungsi ini saja
    return x;
}

int main() {

    cout << "1. variabel global, nilai x: " << x << endl; // saat nilai x belum ditimpa oleh variabel local scope di dalam main()

    // main local scope
    int x = 8; // variabel x ditimpa dari dalam fungsai main() ini, ini adalah variabel local untuk main()
    cout << "2. variabel local main, nilai x: " << x << endl; // saat nilai x sudah ditimpa oleh variabel local scope di dalam main()

    cout << "3. variabel ambil global, nilai x: " << get_global() << endl; // menggunakan fungsi yang dibuat di luar fungsi main() untuk mengambil nilai dari variabel x yang belum ditimpa

    cout << "4. variabel local main, nilai x: " << x << endl; // nilai variabel local main() masih tetap sama

    cout << "5. variabel x_local, nilai x: " << x_local() << endl; // menggunakan fungsi untuk memanggil nilai dari variabel x yang ada di dalam fungsi tersebut

    cout << "6. variabel local main, nilai x: " << x << endl; // nilai variabel local main() masih tetap sama

    {
        cout << "7. variabel local main, nilai x: " << x << endl; // nilai variabel local main() masih tetap sama
        // block scope
        int x = 1; // 
        cout << "8. variabel local block, nilai x: " << x << endl; // nilai variabel local x akan berubah karena x telah dideklarasikan ulang di dalam kurung kurawal ini
        cout << "9. variabel ambil global, nilai x: " << get_global() << endl; // fungs ini akan tetap mengambil nilai x dari global scope (di luar fungsi main)
    }

    cout << "10. variabel local main, nilai x: " << x << endl; // nilai variabel local main() masih tetap sama karena yang berubah hanya yang ada di dalam kurung kurawal saja

    return 0;
}