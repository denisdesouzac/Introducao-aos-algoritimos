#include <iostream>
using namespace std;

void preencher_m(float custo[4][4], int linha, int coluna);

void preencher_v(int vetor[], int num);

int main(){

	int linha = 4;
	int coluna = 4;
	
	float custo[4][4];

	preencher_m(custo, linha, coluna);// Chama a função preencher.
	
	int n_cidades;
	
	cin >> n_cidades;
	
	int identificador[n_cidades];
	
	preencher_v(identificador, n_cidades);
	
	float soma = 0.0;
	int i = 1;// Contador da posição do vetor
	
	// Estrutura que irá fazer a soma das posições
	while(i < n_cidades){
		int l = identificador[i-1];
		int c = identificador[i];

		soma += custo[l][c];
		
		i++;
	}
	
	cout << soma;// Imprima a soma dos valores das posiçoes

	return 0;
}

// Função que irá dar valor a cada posição da matriz.
void preencher_m(float custo[4][4], int linha, int coluna){
	
	for(int l = 0; l < linha; l++){
		for(int c = 0; c < coluna; c++){
			cin >> custo[l][c];
		}
	}
}

// Função que irá preencher o vetor;
void preencher_v(int vetor[], int num){
	
	for( int cont = 0; cont < num ; cont++){
		cin >> vetor[cont];
	}
}





