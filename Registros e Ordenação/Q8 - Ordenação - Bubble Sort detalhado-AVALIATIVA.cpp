#include <iostream>
using namespace std;

void preencher(int vetor[], int quantidade);
void bubble(int vetor[], int tam);
void impressaoPasso_a_passo(bool t_posicao, int n1, int n2, int vetor[], int quantidade,int ultimo);

int main(){
	
	int quantidade;
	cin >> quantidade;// Digite a quantidade do vetor.
	
	int vetor[quantidade];
	
	preencher(vetor, quantidade);
	bubble(vetor, quantidade);
	
}

// Função que irá preencher o vetor.
void preencher(int vetor[], int quantidade){
	
	for(int i = 0; i < quantidade; i++){
		cin >> vetor[i];
	}
}

// Função de ordenação Bubble.
void bubble(int vetor[], int tam){
	
	int aux, ultimo = 0;
	bool troca_posicao = false;
	
	for(int i = 0; i < tam-1; i++){
		for(int j = 0; j < tam-1-i; j++){
			
			if(vetor[j] > vetor[j+1]){
				troca_posicao = true;
				impressaoPasso_a_passo(troca_posicao, vetor[j], vetor[j+1], vetor, tam,ultimo);
				aux = vetor[j];
				vetor[j] = vetor [j+1];
				vetor[j+1]= aux;
			}else{
				impressaoPasso_a_passo(troca_posicao, vetor[j], vetor[j+1], vetor, tam, ultimo);
			}
			troca_posicao = false;
		}
	}
	
	for(int i = 0; i < 1; i++){
		ultimo = 1;
		impressaoPasso_a_passo(troca_posicao, vetor[i], vetor[i+1], vetor, tam, ultimo);
	}
}

// Função que imprime cada passo da ordenação.
void impressaoPasso_a_passo(bool troca_posicao, int n1, int n2, int vetor[], int quantidade, int ultimo){
	

	if((troca_posicao == true) and (ultimo == 0)){
		for(int i = 0; i < quantidade; i++){
		
			if(vetor[i] == n1){
				cout << n1<< " "<< 't'<< "	";
			}else if(vetor[i] == n2){
				cout << n2<< " "<< 't'<< "	";
			}else{
				cout << vetor[i]<< " "<< "	";
			}
		}
		cout << endl;
	}else if((troca_posicao == false) and (ultimo == 0)){
		for(int i = 0; i < quantidade; i++){
		
			if(vetor[i] == n1){
				cout << n1<< " "<< '*'<< "	";
			}else if(vetor[i] == n2){
				cout << n2<< " "<< '*'<< "	";
			}else{
				cout << vetor[i]<< "	";
			}
		}
		cout << endl;
	}
	
	// Se for a ultima rodada imprime tudo sem marcas.
	if(ultimo == 1){
		for(int i = 0; i < quantidade; i++){
			cout <<  vetor[i]<< "	";
		}
		cout << endl;
	}
}
