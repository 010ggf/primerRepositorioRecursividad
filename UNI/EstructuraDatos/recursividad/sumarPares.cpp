#include <iostream>
using namespace std;

int sumarPares(int a, int n) {
    if (n == 0) return 0;
    return a + sumarPares(a + 2, n - 1);
}

int main() {
    int a, n;
    cout << "Dame un numero positivo a: ";
    cin >> a;
    cout << "Dame el numero de pares n: ";
    cin >> n;

    int resultado;
    if (a % 2 == 0) {
        resultado = a + sumarPares(a + 2, n);
    } else {
        resultado = a + sumarPares(a + 1, n);
    }
    
    cout << "La suma de " << a << " y los " << n << " primeros numeros pares a partir de " << a << " es: " << resultado << endl;

    return 0;
}