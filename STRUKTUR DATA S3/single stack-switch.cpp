#include <iostream>
#include <cstdlib>
#include <conio.h> // Pastikan untuk menggunakan ini untuk getch()
using namespace std;

class Stack {
    int top;
    int a[3];

public:
    Stack() { top = -1; }

    bool push(int x) {
        if (top >= 2) {
            cout << "Stack Overflow: Tidak bisa menambah elemen, stack sudah penuh.\n";
            return false;
        } else {
            a[++top] = x; 
            cout << x << " didorong ke dalam tumpukan\n";
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow: Tidak ada elemen untuk dihapus.\n";
            return 0;
        } else {
            return a[top--]; 
        }
    }

    bool isEmpty() {
        return (top < 0); 
    }
};

void clearScreen() {
    system("cls");
}

int main() {
    Stack s;
    int choice, value;

    while (true) {
        clearScreen();
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Cek Stack Kosong\n";
        cout << "4. Keluar\n";
        cout << "Pilih operasi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nilai yang ingin ditambahkan ke stack: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                cout << s.pop() << " dikeluarkan dari tumpukan\n";
                break;
            case 3:
                if (s.isEmpty()) {
                    cout << "Stack kosong\n";
                } else {
                    cout << "Stack tidak kosong\n";
                }
                break;
            case 4:
                cout << "Keluar dari program.\n";
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
        }

        cout << "Tekan enter untuk melanjutkan...";
        getch(); 
    }

    return 0;
}
