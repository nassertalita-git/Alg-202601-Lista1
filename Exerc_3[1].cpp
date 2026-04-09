#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Digite tres numeros: ";
    cin >> a >> b >> c;

    float maior = max(a, max(b, c));
    float menor = min(a, min(b, c));
    float media = (a + b + c) / 3;

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Media: " << media << endl;

    return 0;
}