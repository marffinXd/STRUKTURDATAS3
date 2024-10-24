// #include <iostream>
// using namespace std;

// class Stack {
//     int top;
//     int a[3]; 

// public:
//     Stack() { top = -1; } 

//     bool push(int x) {
//         if (top >= 2) {
//             cout << "Stack Overflow: Tidak bisa menambah elemen, stack sudah penuh.\n";
//             return false;
//         } else {
//             a[++top] = x; 
//             cout << x << " didorong ke dalam tumpukan\n";
//             return true;
//         }
//     }

//     int pop() {
//         if (top < 0) {
//             cout << "Stack Underflow: Tidak ada elemen untuk dihapus.\n";
//             return 0;
//         } else {
//             int x = a[top--]; 
//             return x;
//         }
//     }

//     int peek() {
//         if (top < 0) {
//             cout << "Tumpukan kosong\n";
//             return 0;
//         } else {
//             return a[top];
//         }
//     }

//     bool isEmpty() {
//         return (top < 0); 
//     }
// };

// int main() {
//     Stack s;
    
//     s.push(10);
//     s.push(20);
//     s.push(30);
    
//     s.push(40);

//     cout << s.pop() << " dikeluarkan dari tumpukan\n";
//     cout << s.pop() << " dikeluarkan dari tumpukan\n";
//     cout << s.pop() << " dikeluarkan dari tumpukan\n";

//     s.pop();

//     return 0;
// }


#include <iostream>
using namespace std;

class Stack {
    int top;
    int a[3]; 

public:
    Stack() { top = -1; } 

    bool push(int x) {
        if (top >= 2) {
            return false;
        } else {
            a[++top] = x; 
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            return 0;
        } else {
            int x = a[top--]; 
            return x;
        }
    }

    int peek() {
        if (top < 0) {
            return 0;
        } else {
            return a[top];
        }
    }

    bool isEmpty() {
        return (top < 0); 
    }
};

int main() {
    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    s.push(40);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    s.pop();

    return 0;
}
