#include <iostream>
#include <istream>

using namespace std;

struct TempatTglLahir {
    char tempat[30];
    char tanggalLahir[40];
};

struct AlamatRmh {
    char alamat[30];
    char kodepos[10];
};

struct Mahasiswa {
    char nim[9];
    char nama[25];
    char umur[4];
    TempatTglLahir tgl;
    AlamatRmh alamat;
};

int main() {
    Mahasiswa mhs[3]; 

    for (int i = 0; i < 3; i++) {
        cout << "Input data Mahasiswa " << i+1 << ":\n";
        
        cout << "NIM: ";
        cin.getline(mhs[i].nim, 9);

        cout << "Nama: ";
        cin.getline(mhs[i].nama, 25);

        cout << "Umur: ";
        cin.getline(mhs[i].umur, 4);

        cout << "Tempat Lahir: ";
        cin.getline(mhs[i].tgl.tempat, 30);

        cout << "Tanggal Lahir: ";
        cin.getline(mhs[i].tgl.tanggalLahir, 40);

        cout << "Alamat: ";
        cin.getline(mhs[i].alamat.alamat, 30);

        cout << "Kode Pos: ";
        cin.getline(mhs[i].alamat.kodepos, 10);

        cout << endl;
    }

    
    for (int i = 0; i < 3; i++) {
        cout << "\nData Mahasiswa " << i+1 << ":" << endl;
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "Umur: " << mhs[i].umur << endl;
        cout << "Tempat Lahir: " << mhs[i].tgl.tempat << endl;
        cout << "Tanggal Lahir: " << mhs[i].tgl.tanggalLahir << endl;
        cout << "Alamat: " << mhs[i].alamat.alamat << endl;
        cout << "Kode Pos: " << mhs[i].alamat.kodepos << endl;
    }

    return 0;
}
