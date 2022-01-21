#include <iostream>
using namespace std;

void preencher(char caracteres[], int tamanho);

void intercalar(char vetor1[], char vetor2[], int tamanho1, int tamanho2);

int main(){

	int tamanho1, tamanho2;

	cin >> tamanho1;// Tamanho primeiro vetor.
	cin >> tamanho2;// Tamanho segundo vetor.
	
	char primeiro[tamanho1];
	preencher(primeiro, tamanho1);
	
	char segundo[tamanho2];
	preencher(segundo, tamanho2);
	
	intercalar(primeiro, segundo, tamanho1, tamanho2);

	return 0;
}

//Função que irá dar valor a cada posição do vetor.
void preencher(char caracteres[], int tamanho){
	
	for( int i = 0; i < tamanho; i++){
		cin >> caracteres[i];
	}
	
}

// Função que irá intercalar os vetores.
void intercalar(char vetor1[], char vetor2[], int tamanho1, int tamanho2){
	
	int tamanho_total = tamanho1 + tamanho2;
	char vetor3[tamanho_total];// Vetor juntado sem ordem alfabetica.
	int j = 0;// contador.
	
	// Estrutura que junta dois vetores.
	for(int i = 0; i < tamanho_total; i++){
		
		if (i < tamanho1){
			vetor3[i] = vetor1[i];
		}else if(i >= tamanho1){
			vetor3[i] = vetor2[j];
			j++;
		}
	}
	
	char letra(97);// Letra 'a' tabela ASCII.
	char vetor_em_ordem[tamanho_total];
	j = 0;// Reiniciar contador para utiliza-lo novamente.
	
	// Estrutura que ordena.
	while(letra <= (122)){
		for(int i = 0; i < tamanho_total; i++){
			if(vetor3[i] == letra){
				vetor_em_ordem[j] = vetor3[i];
				j++;
			}
		}
		letra++;
	}
	
	// Estrutura que faz a impressão dos valores.
	for( int i = 0; i < tamanho_total ; i++){
		cout << vetor_em_ordem[i] << " ";// Imprima cada posição com com espaço.
	}
}
