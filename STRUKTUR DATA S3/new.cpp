#include <iostream>
#include <conio.h>  // untuk fungsi getch()
#include <cstdlib>  // untuk system("cls")
#include <stdlib.h> // tambahan include stdlib

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
        top++;
        stack[top] = value;
        cout << "\nNilai " << value << " telah di-push.";
    }
}
