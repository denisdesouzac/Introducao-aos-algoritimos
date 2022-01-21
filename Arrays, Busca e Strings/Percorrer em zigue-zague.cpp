#include <iostream>
using namespace std;

int main(){

	int linha, coluna;

	cin >> linha;// Digite o número de linhas.
	cin >> coluna;// Digite o número de colunas.

	int matriz[linha][coluna];

	// Estrutura para preencher a matriz.
	for(int l = 0; l < linha; l++){
		for(int c = 0; c < coluna; c ++){
			cin >> matriz[l][c];
		}
	}

	// Estrutura imprime zigue-zague
	for(int l = 0; l < linha; l++){// Passa linha por linha.

		if(l % 2 == 0){// Se for linha de indice par, lê de trás pra frente.
			for(int c = coluna - 1; c >= 0; c --){
				cout << matriz[l][c] << " ";
			}
		}else if(l % 2 != 0){// Se for impar, lê as colunas na ordem normal.
			for(int c = 0 ; c < coluna; c ++){
				cout << matriz[l][c] << " ";
			}
		}
	}
	return 0;
}
