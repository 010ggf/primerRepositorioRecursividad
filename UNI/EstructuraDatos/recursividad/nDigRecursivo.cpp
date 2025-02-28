#include <iostream>
using namespace std;    

int nDigitos(int n){
    if (n==0) return 0;
    return 1+nDigitos(n/10);
}

int main(){
    int n;
    cout<<"dame un numero: ";
    cin>>n;
    
    cout<<"El numero tiene "<<nDigitos(n)<<" digitos"<<endl;
    return 0;
}