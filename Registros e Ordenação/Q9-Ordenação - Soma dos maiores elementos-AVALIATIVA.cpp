#include <iostream>
using namespace std;

void preencher( int vetor[], int tamanho_vetor);
void insertion( int vetor[], int tamanho_vetor);
void imprime(int vetor[], int quantidade_somada);

int main(){
	
	int tamanho_vetor;
	
	cin >> tamanho_vetor;
	
	int vetor[tamanho_vetor];
	
	preencher(vetor, tamanho_vetor);
	insertion(vetor, tamanho_vetor);
	
	int quantidade_somada;
	cin >> quantidade_somada;
	
	imprime(vetor,quantidade_somada);
	
	return 0;
}

// Função que preencherá o vetor.
void preencher( int vetor[], int tamanho_vetor){
	
	for(int i = 0; i < tamanho_vetor; i++){
		cin >> vetor[i];
	}
}

// Função que irá ordenar do maior para o menor.
void insertion( int vetor[], int tamanho_vetor){
	
	int pivo, j;
	
	for(int i = 1; i < tamanho_vetor; i++){
		pivo = vetor[i];
		j = i - 1;
		while((j >= 0) and (pivo > vetor[j])){
			vetor[j+1] = vetor[j];
			j--;
		}
		vetor[j+1] = pivo;
	}
}

// Função que irá imprimir a soma dos maiores;
void imprime(int vetor[], int quantidade_somada){
	
	int resultado = 0;
	
	for(int i =0; i < quantidade_somada; i++){
		resultado += vetor[i];
	}
	
	cout << resultado << "\n";
}
