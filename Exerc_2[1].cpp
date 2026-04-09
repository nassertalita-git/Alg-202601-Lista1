#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Numero par\n";
    else
        cout << "Numero impar\n";

    return 0;
}