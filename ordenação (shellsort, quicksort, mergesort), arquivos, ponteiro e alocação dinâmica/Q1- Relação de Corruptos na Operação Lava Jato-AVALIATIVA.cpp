#include <iostream>
#include <fstream>
using namespace std;

struct corruptos{
	
	string nome;
	string partido;
	float quantia;
	
};

void intercala(corruptos a[], int inicio, int meio, int fim);
void mergesort(corruptos a[], int inicio, int fim);

int main(){

	int desvios;
	cin >> desvios;// Digite o número de desvios.
	
	corruptos dados[desvios];// Registro
	
	// Estrutura que preenche os registros com os dados dos corruptos.
	for(int i = 0; i < desvios; i++){
		cin >> dados[i].nome;
		cin >> dados[i].partido;
		cin >> dados[i].quantia;
	}
	
	mergesort(dados, 0, desvios-1);
	
	ofstream arquivo("relacao_corruptos.txt");// Cria o arquivo de corruptos.
	int i = 0;
	while(i < desvios){
		arquivo << dados[i].nome << endl;// Coloca os dados do registro no arquivo.
		i++;
	}
	arquivo.close();// Fechar arquivo.

	return 0;
}

// Função de intercalação.
void intercala(corruptos a[], int inicio, int meio, int fim){
	
	int i = inicio, j = meio + 1;
	int tamanho = fim - inicio + 1;
	
	corruptos aux[tamanho];  // vetor auxiliar 
	
	for(int  k=0; k < tamanho; k++){
		if((i <= meio) and (j <= fim)){
			if(a[i].quantia >= a[j].quantia){
				aux[k] = a[i];  // copia trecho1 em aux[]
				i++; // avança em trecho1
			}else{ //
				aux[k] = a[j];  // copia trecho2 em aux[]
				j++; // avanca em trecho2
			}
			
		}else if(i > meio){// terminou o trecho1 
			aux[k] = a[j];
			j++;
		}else{  // terminou o trecho2
			aux[k] = a[i];
			i++;
		}
	} // terminando: copiar de aux[] em a[inicio:fim]
	for(int k = 0; k < tamanho; k++){
		a[inicio + k] = aux[k];
	}
}

// Função de ordenação.
void mergesort(corruptos a[], int inicio, int fim){
	
	int meio;
	if(inicio < fim) {
		meio = (inicio + fim)/2;
		mergesort(a, inicio, meio);
		mergesort(a, meio+1, fim); 
		intercala(a, inicio, meio, fim);
	}
}
