#include <iostream>
using namespace std;

int main() {
    long long a = 0, b = 1, c;

    for(int i = 1; i <= 100; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}