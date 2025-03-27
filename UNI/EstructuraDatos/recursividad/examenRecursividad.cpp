#include <iostream>
#include <vector>
using namespace std;

int mcd(int a, int b) {
    if (b == 0) return a;
    return mcd(b, a % b);
}

void divisoresC(int a, int b, vector<int>& divis) {
    int minN = min(a, b);
    for (int i = 1; i <= minN; ++i) {
        if (a % i == 0 && b % i == 0) {
            divis.push_back(i);
        }
    }
}

int main() {
    int a, b;
    cout << "Dame un numero positivo: ";
    cin >> a;
    cout << "Dame otro numero positivo: ";
    cin >> b;

    int resultadoMCD = mcd(a, b);
    vector<int> div;
    divisoresC(a, b, div);

    cout << "El maximo comun divisor de " << a << " y " << b << " es: " << resultadoMCD << endl;
    cout << "Los divisores comunes son: ";
    for (size_t i = 0; i < div.size(); ++i) {
        cout << div[i] << " ";
    }
    cout << endl;

    return 0;
}