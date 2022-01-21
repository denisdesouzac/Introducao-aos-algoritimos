#include <iostream>
using namespace std;

void preencher(int v[], int tamanho);

int menor(int v[], int tamanho, int& i, int& num_menor, int& posicao);

int main(){

	int num, i = 0;
	int posicao = 0;
	
	cin >> num;
	
	int v[num];
	
	preencher(v,num);
	
	int num_menor = v[0];
	
	menor(v, num, i, num_menor, posicao);

    return 0;
}

// Função que irá preencher o vetor.
void preencher(int v[], int tamanho){
	
	for(int i= 0; i < tamanho; i++){
		cin >> v[i];
	}
}

// Função que irá ver qual o menor dígito, a posição e imprimir.
int menor(int v[], int tamanho, int& i, int& num_menor, int& posicao){
	
	if (i < tamanho){
		if (v[i] < num_menor){
			num_menor = v[i];
			posicao = i;
		}
		return menor(v,tamanho, ++ i, num_menor, posicao);
	}

	cout << num_menor << " " << posicao;
	
	return 0;
}
