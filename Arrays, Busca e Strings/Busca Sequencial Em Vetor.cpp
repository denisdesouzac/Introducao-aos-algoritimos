#include <iostream>
using namespace std;

void busca_s(string palavra, int tamanho, char caracter);

int main(){
	
	int tamanho;
	cin >> tamanho;// Digite o tamanho do vetor.
	
	string palavra;
	cin >> palavra;// Digite uma palavra.
	
	char caracter;
	cin >> caracter;// Digite o caracter a ser buscado.

	busca_s(palavra, tamanho, caracter);

	return 0;
}

// Função que busca e imprime a posição do caracter desejado;
void busca_s(string palavra, int tamanho, char caracter){
	
	for(int i = 0; i < tamanho; i++){
		if (palavra [i] == caracter ){
			cout << i << " ";
		}
	}
}
