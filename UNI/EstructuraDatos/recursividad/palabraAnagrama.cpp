#include <iostream>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;

bool sonAnagramas(string palabra1, string palabra2) {
    // Si las longitudes son diferentes, no pueden ser anagramas
    if (palabra1.length() != palabra2.length()) {
        return false;
    }

    // Función recursiva para contar las letras
    function<void(const string&, int, int*)> contarLetras = [&](const string& palabra, int index, int* contador) -> void {
        if (index == palabra.length()) {
            return;
        }
        contador[palabra[index] - 'a']++;
        contarLetras(palabra, index + 1, contador);
    };

    int contador1[26] = {0};
    int contador2[26] = {0};

    contarLetras(palabra1, 0, contador1);
    contarLetras(palabra2, 0, contador2);

    // Comparar los contadores de letras
    for (int i = 0; i < 26; i++) {
        if (contador1[i] != contador2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string palabra1, palabra2;
    cout << "Introduce la primera palabra: ";
    cin >> palabra1;
    cout << "Introduce la segunda palabra: ";
    cin >> palabra2;

    if (sonAnagramas(palabra1, palabra2)) {
        cout << "Las palabras son anagramas." << endl;
    } else {
        cout << "Las palabras no son anagramas." << endl;
    }

    return 0;
}
