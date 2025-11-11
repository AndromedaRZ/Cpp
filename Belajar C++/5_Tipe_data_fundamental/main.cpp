#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Bilangan bulat
    int a = 5; // 32-bit

    cout << "tipe data Integer" << endl;
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl; // melihat ukuran Byte si variabel a menggunakan 'sizeof'
    cout << numeric_limits<int>::max() << endl; // melihat maksimum ukuran Byte dari tipe data integer
    cout << numeric_limits<int>::min() << endl; // melihat minimum ukuran Byte dari tipe data integer
    // cin.get();

    // Bilangan bulat (long)
    long b = 6; // 64-bit

    cout << "\nTipe data Long" << endl;
    cout << b << endl;
    cout << sizeof(b) << " byte" << endl;
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl;

    short c = 7; // Bilangan bulat (short)

    cout << "\nTipe data short" << endl;
    cout << c << endl;
    cout << sizeof(c) << " byte" << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    // Bilangan Desimal / Bilangan berkoma
    float d = 8;

    cout << "\nTipe data float" << endl;
    cout << d << endl;
    cout << sizeof(d) << " byte" << endl;
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<float>::min() << endl;
    
    double e = 9;

    cout << "\nTipe data double" << endl;
    cout << e << endl;
    cout << sizeof(e) << " byte" << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::min() << endl;
    
    // Karakter
    char f = 'a'; // single character, tipe data yang hanya bisa menyimpan satu karakter saja

    cout << "\nTipe data char" << endl;
    cout << f << endl;
    cout << sizeof(f) << " byte" << endl;
    // cout << numeric_limits<char>::max() << endl;
    // cout << numeric_limits<char>::min() << endl;
    
    string f2 = "karakter"; // 

    cout << "\nTipe data string" << endl;
    cout << f2 << endl;
    cout << sizeof(f2) << " byte" << endl;
    cout << numeric_limits<string>::max() << endl;
    cout << numeric_limits<string>::min() << endl;
    

    // Boolean
    bool g = true; // true atau false

    cout << "\nTipe data bool" << endl;
    cout << g << endl;
    cout << sizeof(g) << " byte" << endl;
    cout << numeric_limits<bool>::max() << endl;
    cout << numeric_limits<bool>::min() << endl;

    // unsigned int
    unsigned int h = 5; // 32-bit

    cout << "\nTipe data Unsigned Integer" << endl;
    cout << h << endl;
    cout << sizeof(h) << " byte" << endl; // melihat ukuran Byte si variabel h menggunakan 'sizeof'
    cout << numeric_limits<unsigned int>::max() << endl; // melihat maksimum ukuran Byte dari tipe data unsigned integer
    cout << numeric_limits<unsigned int>::min() << endl; // melihat minimum ukuran Byte dari tipe data unsigned integer

    return 0;
}