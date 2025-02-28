#include <iostream>
using namespace std;

bool cadenaPalindroma(string cadena){
    if (cadena.length()==0) return true;
    if (cadena[0]!=cadena[cadena.length()-1]) return false;
    return cadenaPalindroma(cadena.substr(1,cadena.length()-2));
}

int main (){
    string cadena;
    cout<<"dame una cadena: ";
    cin>>cadena;
    bool b = cadenaPalindroma(cadena);
    if (b) cout<<"Es palindroma"<<endl;
    else cout<<"No es palindroma"<<endl;

    return 0;
}
