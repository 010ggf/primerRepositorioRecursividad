#include <iostream>
using namespace std;

int potencia(int n, int p){
    if (p==0) return 1;
    return n*potencia(n, p-1);
}

int main(){
    int n, p;
    cout<<"dame un numero: ";
    cin>>n;
    cout<<"dame la potencia: "; 
    cin>>p;

    potencia(n, p);

    return 0;
}