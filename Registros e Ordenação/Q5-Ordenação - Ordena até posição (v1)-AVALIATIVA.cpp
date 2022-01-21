#include <iostream>
using namespace std;

void preencher( int vetor[], int tamanho);
void selection(int vetor[], int posicao_parada);
void imprimir(int vetor[], int tamanho);

int main(){
	
	int tamanho;
	cin >> tamanho;
	
	int vetor[tamanho];
	
	preencher(vetor, tamanho);
	
	int posicao_parada;
	cin >> posicao_parada;
	
	selection(vetor, posicao_parada);
	
	imprimir(vetor, tamanho);
	
	return 0;
}

// Função que preencherá o vetor.
void preencher( int vetor[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
}

// Função que ordenará até a posição desejada.
void selection(int vetor[], int posicao_parada){
	
	int posMaior = 0, aux = 0;
	
	for (int i=0; i <= posicao_parada-1; ++i){
		posMaior = i;
		for (int j=i+1; j <= posicao_parada; ++j) {
			if (vetor[j] > vetor[posMaior]){
				posMaior = j;
			}
		}
		aux = vetor[i];
		vetor[i] = vetor[posMaior];
		vetor[posMaior] = aux;
	}
	
}

// Função que imprime o resultado.
void imprimir(int vetor[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		cout << vetor[i] << " ";
	}
	
	cout << "\n";
}
