#include <iostream>
using namespace std;
void cadenaReves(string cadena){
    if (cadena.length()==0) return;
    cout<<cadena[cadena.length()-1];
    cadenaReves(cadena.substr(0,cadena.length()-1));
}

int main(){
    string cadena;
    cout<<"dame una cadena: ";
    cin>>cadena;

    cadenaReves(cadena);
    
    
}