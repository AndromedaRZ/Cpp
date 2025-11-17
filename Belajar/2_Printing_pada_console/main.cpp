#include <iostream> // menambahkan iostream
// latihan pendahuluan

int main() // ini disebut sebagai kepala fungsinya atau header
// di bawah ini disebut sebagai badan fungsinya atau body
{
    std::cout << "Hello World, ini baris pertama\n";
    std::cout << "Hello World!, ini baris baru" << std::endl;
    std::cin.get();
    return 0;
}

// dalam c++, sebuah baris kode disebut sebagai statement dan setiap akhir dari statement harus diakhiri dengan titik koma atau semi-colon (;)
// std diartikan sebagai standar library
// cout == console out
// endl == endline atau akhir dari baris, bisa digunakan jika ingin membuat garis baru pada kalimat berikutnya
// cin == console in
// return 0; artinya saat program di atas sudah beres, menandakan bahwa programnya tidak ada error ketika sudah berjalan semua
// bagian diantara petik dua ("Hello World!") yang akan ditampilkan oleh cout adalah string atau teks yang bisa kita cetak/print