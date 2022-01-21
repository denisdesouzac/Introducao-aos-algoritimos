#include <iostream>
#include <cstring>
using namespace std;

void sem_repetidas(char palavra[], int tamanho);

int main(){

	char palavra[30];// Número de caracteres máximo do char.
	cin >> palavra;// Digite uma palavra.

	int tamanho;
	tamanho = strlen(palavra);// Conta quantos caracteres tem a palavra.

	sem_repetidas(palavra, tamanho);
	
	return 0;
}

// Função que exclui letras repetidas.
void sem_repetidas(char palavra[], int tamanho){
	
	for(int cont = 0; cont < tamanho; cont++){
		if(palavra[cont] != palavra[cont + 1]){
			cout << palavra[cont];
		}
	}
}
