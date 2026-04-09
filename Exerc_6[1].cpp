#include <iostream>
using namespace std;

int main() {
    for(int num = 1; num <= 100; num++) {
        int soma = 0;
        for(int i = 1; i < num; i++) {
            if(num % i == 0)
                soma += i;
        }
        if(soma == num)
            cout << num << " ";
    }

    return 0;
}