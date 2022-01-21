#include <iostream>
using namespace std;

int main(){
	
	int numerador, denominador, resultado, resto;
	
	cin>> numerador;
	cin>> denominador;
	
		
	
	if( numerador== 0 or denominador== 0){
		cout<< "erro";
		}else{
			resultado= numerador/denominador;
		resto= numerador%denominador;
		cout<< 	resultado << endl << resto << endl;
		}
	
	return 0;
}
