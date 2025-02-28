#include <iostream>
using namespace std;    

int main(){
    int n;
    cout<<"dame un numero: ";
    cin>>n;
    
    int contador = 0;
    while (n>0){
        n = n/10;
        contador++;
    }
    
    cout<<"El numero tiene "<<contador<<" digitos"<<endl;
    return 0;
}