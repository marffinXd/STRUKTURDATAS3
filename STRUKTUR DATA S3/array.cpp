#include <iostream>
#include <istream>

struct Mahasiswa {
    char nim[9];
    char nama[25];
    char alamat[40];
    char umur[3];
};

int main() {
    // Proses input
    Mahasiswa mhs;

    std::cout << "NIM      : ";
    std::cin.getline(mhs.nim, 9);

    std::cout << "Nama     : ";
    std::cin.getline(mhs.nama, 25);

    std::cout << "Alamat   : ";
    std::cin.getline(mhs.alamat, 40);

    std::cout << "Umur     : ";
    std::cin.getline(mhs.umur, 3);

    // Proses output
    std::cout << "\nData Mahasiswa:\n";
    std::cout << "NIM      : " << mhs.nim << '\n';
    std::cout << "Nama     : " << mhs.nama << '\n';
    std::cout << "Alamat   : " << mhs.alamat << '\n';
    std::cout << "Umur     : " << mhs.umur << '\n';

    return 0;
}
