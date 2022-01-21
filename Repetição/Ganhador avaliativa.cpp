#include <iostream>
using namespace std;

int main(){
	
	int ingressos, num, premiado,cont = 0;// cont = posição de chegada
	
	cin >> ingressos;
	
	if(cont != num){
		premiado = 0;
	}
	
	do{
		cin >> num;
		cont++;
		if(cont == num){
		premiado = num;
		break;
	} 
	}while(cont < ingressos);
	
	while(cont < ingressos){
		cin >> num;
		cont++;
	}	
	
	cout << premiado;
	
	return 0;
}
