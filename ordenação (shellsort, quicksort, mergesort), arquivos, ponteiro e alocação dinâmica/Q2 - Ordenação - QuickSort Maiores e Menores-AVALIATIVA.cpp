#include <iostream>
using namespace std;

void preencher(int vetor[], int quantidade);
void quickSort(int v[], int esq, int dir);

int main(){
	
	int quantidade;
	cin >> quantidade;
	
	int vetor[quantidade];
	preencher(vetor, quantidade);
	quickSort(vetor, 0, quantidade-1);
	
	cout << "\n";

	return 0;
}

// Função que preencherá o vetor.
void preencher(int vetor[], int quantidade){
	
	for(int i = 0; i < quantidade; i++){
		cin >> vetor[i];
	}
}

// Função de ordenação.
void quickSort(int v[], int esq, int dir) {

	int i, j, aux, pivo;
	int maior = 1, menor = 1000;
	i = esq;
	j = dir;
	pivo = v[( esq + dir ) / 2];
	while (i <= j) {
		while (v[i] < pivo) {
			i++;
		}
		while (v[j] > pivo) {
			j--;
		}
		
		if (i <= j) {
			
			if(v[i] > maior){
				maior = v[i];
			}
			if(v[j] < menor){
				menor = v[j];
			}

			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	}
	
	if(maior == menor){
		cout << -1 << " " << -1 << "\n";
	}else{
		cout << maior << " " << menor << "\n";
	}
	
	if (esq < j) {
		quickSort(v, esq, j);
	}
	if (i < dir) {
		quickSort(v, i, dir);
	}
}
