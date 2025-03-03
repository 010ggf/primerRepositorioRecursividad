#include <iostream>
using namespace std;

int sumaHasta(int n) {
    if (n == 0) return 0;
    return n + sumaHasta(n - 1);
}

int main() {
    int numero;
    cout << "Dame un numero: ";
    cin >> numero;

    int resultado = sumaHasta(numero);
    cout << "La suma de 0 hasta " << numero << " es: " << resultado << endl;

    return 0;
}