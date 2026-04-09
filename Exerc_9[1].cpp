#include <iostream>
using namespace std;

int main() {
    int somaTotal = 0;

    for(int i = 0; i <= 6; i++) {
        
            somaTotal += i ;
        }
    

    cout << "Soma total dos pontos do domino: " << somaTotal << endl;

    return 0;
}