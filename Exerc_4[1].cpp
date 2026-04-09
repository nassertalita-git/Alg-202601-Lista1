#include <iostream>
using namespace std;

int main() {
    char op;
    float x, y;

    cout << "Digite a operacao (+, -, *, /): ";
    cin >> op;
    cout << "Digite dois numeros: ";
    cin >> x >> y;

    switch(op) {
        case '+': cout << x + y; break;
        case '-': cout << x - y; break;
        case '*': cout << x * y; break;
        case '/':
            if (y != 0)
                cout << x / y;
            else
                cout << "Divisao por zero!";
            break;
        default:
            cout << "Operacao invalida!";
    }

    return 0;
}