#include <iostream>
using namespace std;

void cambiar(int *a, int *b){
    int temp= *a;
    *a = *b;
    *b = temp;
    cout << "despues de cambiar n: " << *a << endl;
    cout << "despues de cambiar v: " << *b << endl;
}

int main (){
    int n=10;
    int v=9;
    cout << "antes de cambiar n: " << n << endl;
    cout << "antes de cambiar v: " << v << endl;

    cambiar(&n, &v);

    return 0;
   
}