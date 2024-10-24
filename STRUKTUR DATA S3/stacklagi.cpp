#include <iostream>
#include <conio.h>  // untuk fungsi getch()
#include <cstdlib>  // untuk system("cls")

using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

void push() {
    int value;
    if (top == MAX - 1) {
        cout << "\nStack penuh!";
    } else {
        cout << "\nMasukkan nilai untuk di-push: ";
        cin >> value;
        stack[++top] = value; // Menggabungkan increment dan assignment
        cout << "\nNilai " << value << " telah di-push.";
    }
}

void pop() {
    if (top == -1) {
        cout << "\nStack kosong!";
    } else {
        cout << "\nNilai " << stack[top--] << " telah di-pop."; // Menggabungkan decrement dan assignment
    }
}

void clear() {
    top = -1;
    cout << "\nStack telah dibersihkan.";
}

void print() {
    if (top == -1) {
        cout << "\nStack kosong!";
    } else {
        cout << "\nIsi stack: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
    }
}

int main() {
    int choose;

    do {
        system("cls");  // Bersihkan layar sebelum menampilkan menu
        print();
        cout << "\n\n1. Push"
             << "\n2. Pop"
             << "\n3. Clear"
             << "\n4. Exit"
             << "\n\nPergerakan (TOP): " << top
             << "\n\n>> Pilih: ";
        cin >> choose;

        switch (choose) {
            case 1:
                push();
                getch();
                break;
            case 2:
                pop();
                getch();
                break;
            case 3:
                clear();
                getch();
                break;
            case 4:
                cout << "Terima Kasih telah menggunakan program ini!";
                getch();
                break;
            default:
                cout << "Pilihan tidak ada, masukkan pilihan yang benar.";
                getch();
                break;
        }
    } while (choose != 4);

    return 0;
}
