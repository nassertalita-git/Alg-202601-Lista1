#include <iostream>
using namespace std;

int main() {
    float num, soma = 0;
    int contador = 0;

    while(true) {
        cout << "Digite um numero (negativo para parar): ";
        cin >> num;

        if(num < 0)
            break;

        soma += num;
        contador++;
    }

    if(contador > 0)
        cout << "Media: " << soma/contador << endl;
    else
        cout << "Nenhum valor valido informado.\n";

    return 0;
}