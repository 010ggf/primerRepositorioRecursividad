#include <iostream>
using namespace std;

bool esPar(int n);
bool esImpar(int n);

bool esPar(int n){
	if (n==0) return true;
	
	return esImpar(n-1);
}

bool esImpar(int n){
	if (n==0) return false;
	
	return esPar(n-1);
}

int main(){
	bool resultado = esImpar(4);
	
	if (resultado){
		cout<< "Es impar"<<endl;
		
	}else{
		cout<<"es par"<<endl;
	}
	
	
	return 0;
}

