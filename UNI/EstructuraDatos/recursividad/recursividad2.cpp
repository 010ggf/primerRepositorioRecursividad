#include <iostream>
using namespace std;

int fibo(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    cout<<"dame un numero: ";
    cin>>n;
    
    cout<<"La posicion de "<<n<<" en la serie fibonacci es: "<<fibo(n)<<endl;
    return 0;
}