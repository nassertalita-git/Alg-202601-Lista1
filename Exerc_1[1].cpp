#include <iostream>
using namespace std;

int main() {
    int totalSegundos;
    cout << "Digite o total de segundos: ";
    cin >> totalSegundos;

    int horas = totalSegundos / 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = totalSegundos % 60;

    cout << horas << "h " << minutos << "m " << segundos << "s\n";
    
    system("pause");
    
    return 0;
}