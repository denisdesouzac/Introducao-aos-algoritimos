#include <iostream>
using namespace std;

void capicua(int N);

int main(){
	
	int num;// número a ser analisado.
	
	cin >> num;// leia o número.
	capicua(num);// aplique a função capicua no número.

	return 0;
}


//função para verificar se o número é capicua.
void capicua(int N){// N é o número no parâmetro que vai ser analisado.
	
	int numI = 0;// número invertido.
	int aux;// auxiliar do número a ser analisado.
	int resto;// resto da divisão.
	
	aux = N;// atribuir o valor de N para aux.
	
	while( aux > 0 ){
		resto = aux % 10;// calcular o resto.
		aux = aux / 10;// auxiliar recebe ela mesma dividida por 10.
		numI = (numI * 10) + resto;// calcular o número invertido.
	}
	
	if( N == numI ){
		cout << "sim";// se o número for capicua digite "sim".
	}else{
		cout << "nao";// se o número não for capicua digite "nao".
	}
}
