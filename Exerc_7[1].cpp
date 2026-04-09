#include <iostream>
using namespace std;

int main() {
    int num;
    bool primo = true;

    cout << "Digite um numero: ";
    cin >> num;

    if(num <= 1)
        primo = false;
    else {
        for(int i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if(primo)
        cout << "Numero primo\n";
    else
        cout << "Nao e primo\n";

    return 0;
}