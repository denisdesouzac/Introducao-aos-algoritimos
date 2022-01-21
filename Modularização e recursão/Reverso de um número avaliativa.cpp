#include <iostream>
using namespace std;

void reverso(int N);

int main(){
	
	int num;// Número que vai ser revertido.
	
	cin >> num;// Leia "num".
	
	reverso(num);// Aplique a função reverso em "num".
	
	return 0;
}

// Função que irá reverter o número.
void reverso (int N){// Número que vai ser revertido dentro do parâmetro
	int  resto;// Variável para calcular o resto.
	
	while( N > 0 ){
		
		resto = N % 10;// Calcule o resto.
		N = N / 10;// "N" recebe um novo valor.
		cout << resto;// Imprima o resto até  formar o número.
		
	}
}
