#include <iostream>
using namespace std;

void preencher(int vetor[], int num);
int busca(int vetor[], int pos_inicial, int pos_final, int num_buscado, int& posicao, int& cont);

int main(){

	int num;// Número que vai ser o tamanho do vetor.
	
	cin >> num;// Digite o número desejado.
	
	int vetor[num];

	preencher(vetor,num);// Aplique a função "preencher" no vetor.
	
	int num_buscado;
	
	cin >> num_buscado;// Digite o número a ser buscado;

	int pos_inicial = 0;
	int pos_final = num - 1;
	int posicao = -1;
	int cont = 0;// contará o número de comparações.
	
	busca(vetor, pos_inicial, pos_final, num_buscado, posicao, cont);

	cout << posicao << "\n";
	cout << cont << "\n";

	return 0;
}

// Função que irá preencher o vetor;
void preencher(int vetor[], int num){
	
	for( int cont = 0; cont < num ; cont++){
		cin >> vetor[cont];
	}
}

// Função que irá fazer a busca binária.
int busca(int vetor[], int pos_inicial, int pos_final, int num_buscado, int& posicao, int& cont){
	
	while(pos_inicial <= pos_final){
		
		int meio = (pos_inicial + pos_final) /2;
		cont ++;
		if(num_buscado == vetor[meio]){
			posicao = meio;
			pos_inicial = pos_final + 1;
		}else{
			if(num_buscado > vetor[meio]){
				pos_inicial = meio + 1;
			}else{
				pos_final = meio - 1;
			}
		}
	}
	return 0;
}
