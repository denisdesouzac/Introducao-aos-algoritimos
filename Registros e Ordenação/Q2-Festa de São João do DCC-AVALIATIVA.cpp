#include <iostream>
using namespace std;

struct professor{
	
	string nome;
	string alimento1;
	int quantidade1;
	string alimento2;
	int quantidade2;
};

struct comida{
	
	string alimento;
	int quantidade;
};

void preencher(professor dados[], int num_professores);
void preencher_alimentos(comida total_alimentos[], int& tamanho_vetor, string nome_alimento, int quant_alimento);
void imprimir(comida total_alimentos[], int tamanho_capacidade);

int main(){
	
	int num_professores;
	cin >> num_professores;
	
	professor dados[num_professores];
	
	preencher(dados, num_professores);
	
	comida total_alimentos[2 * num_professores];
	int tamanho_capacidade = 0;
	
	for(int i = 0; i < num_professores; i++){
		
		preencher_alimentos( total_alimentos, tamanho_capacidade,
							dados[i].alimento1, dados[i].quantidade1 );
							
		preencher_alimentos( total_alimentos, tamanho_capacidade,
							dados[i].alimento2, dados[i].quantidade2 );
	}
	
	imprimir(total_alimentos, tamanho_capacidade);
	
	return 0;
}

// Função que irá preencher o vetor de registros.
void preencher(professor dados[], int num_professores){
	
	for(int i = 0; i < num_professores; i++){
		cin >> dados[i].nome;
		cin >> dados[i].alimento1;
		cin >> dados[i].quantidade1;
		cin >> dados[i].alimento2;
		cin >> dados[i].quantidade2;
	}
}

// Função que irá preencher o vetor de alimentos somando as quatidades.
void preencher_alimentos(comida total_alimentos[], int& tamanho_vetor, string nome_alimento, int quant_alimento){
	
	int i = 0;
	
	while((i < tamanho_vetor) and (total_alimentos[i].alimento != nome_alimento)){
		i++;
	}
	
	if(i < tamanho_vetor){
		total_alimentos[i].quantidade += quant_alimento;
	}else{
		total_alimentos[i].alimento = nome_alimento;
		total_alimentos[i].quantidade = quant_alimento;
		tamanho_vetor++;
	}
}

//Função que irá imprimir a resposta.
void imprimir(comida total_alimentos[], int tamanho_capacidade){
	
	for(int i = 0; i < tamanho_capacidade; i++){
		cout << total_alimentos[i].alimento << " " << total_alimentos[i].quantidade << "\n";
	}
}
