#include <iostream>
using namespace std;

int main(){

	int numero;
	int linhas = 0;
	
	cin >> numero;// Digite um número.
	
	int matriz[numero][numero];
	
	int n = 1;
	
	// Estrutura que dá valor a cada posição.
	for(int l = 0; n <= numero ; l++){
		for(int c = 0; c <= l; c++){
			matriz[l][c] = n;
			n++;
			linhas = l;
		}
	}
	
	// Estrutura que imprime a última linha do triânculo de Floyd.
	for(int c = 0; c <= linhas; c++){
		if(c != linhas){
			cout << matriz[linhas][c] << "--";
		}else{
			cout << matriz[linhas][c];
		}
	}

	return 0;
}
