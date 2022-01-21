#include <iostream>
using namespace std;

void imprimir(int vetor[], int tamanho);

int main(){

	int num;
	
	cin >> num;//Digite um número.
	
	int vetor[num];// O número vai ser o tamanho do vetor.
	
	for( int cont = 0; cont < num; cont++){
		cin >> vetor[cont];// Digite um número para cada posição
	}
	
	imprimir(vetor,num);// Aplique a função imprimir no vetor.
	
	cout << endl;

    return 0;
}

//Função que irá imprimir a sequência da forma proposta.
void imprimir(int vetor[], int tamanho){
	int cont;// Contador
	
	for(cont = 0; cont < tamanho; cont++){
		
		if(cont == (tamanho -1) and cont == 0){
			cout << '[' << vetor[cont] << ']';
		}else if(cont == 0){
			cout << '[' << vetor[cont] << ',';
		}else if(cont == (tamanho - 1)){
			cout << " " << vetor[cont] << ']';
		}else{
			cout << " " << vetor[cont] << ',';
		}
		
	}
	
	if(cont == 0){
		cout << '[' << ']';
	}
}
