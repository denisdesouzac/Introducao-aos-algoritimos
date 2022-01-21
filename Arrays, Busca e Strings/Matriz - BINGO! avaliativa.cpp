#include <iostream>
using namespace std;

void preencher(int bingo[5][5], int linha, int coluna);

int analise(int bingo[5][5], int linha, int coluna);

int main(){

	int linha = 5;
	int coluna = 5;
	
	int bingo[5][5];

	preencher(bingo, linha, coluna);// Chama a função preencher.

	analise(bingo, linha, coluna);// Chama a função análise
	
	cout << analise(bingo, linha, coluna)<< "\n";
	
    return 0;
}

// Função que irá dar valor a cada posição da matriz.
void preencher(int bingo[5][5], int linha, int coluna){
	
	for(int l = 0; l < linha; l++){
		for(int c = 0; c < coluna; c++){
			cin >> bingo[l][c];
		}
	}
}

// Função que irá analisar se existe algum bingo na cartela(matriz).
int analise(int bingo[5][5], int linha, int coluna){
	
	int cont = 0;
	
	// Estrutura que analisa bingo na linha.
	for(int l = 0; l < linha; l++){
		cont = 0;
		for(int c = 0; c < coluna; c++){
			if (bingo[l][c] == 1){
				cont ++;
				if(cont == 5){
					return 1;
				}
			}	
		}
	}
	
	// Estrutura que analisa bingo na coluna.
	for(int c = 0; c < coluna; c++){
		cont = 0;
		for(int l = 0; l < linha; l++){
			if (bingo[l][c] == 1){
				cont ++;
				if(cont == 5){
					return 2;
				}
			}	
		}
	}
	
	cont = 0;
	// Estrutura que analisa bingo na diagonal principal.
	for(int l = 0; l < linha; l++){
		for(int c = 0; c < coluna; c++){
			if (c == l and bingo[l][c] == 1){
				cont ++;
				if(cont == 5){
					return 3;
				}
			}	
		}
	}
	
	cont = 0;
	// Estrutura que analisa bingo na diagonal secundária.
	for(int l = 0; l < linha; l++){
		for(int c = 0; c < coluna; c++){
			if( c == (linha - 1) - l and bingo[l][c] == 1){
				cont ++;
				if(cont == 5){
					return 4;
				}
			}	
		}	
	}
		

	return -1;
}


