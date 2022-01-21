#include <iostream>
using namespace std;

struct carros{
	
	string nome;
	int ano;
	int preco;
	
};

int main(){
	
	int num_carros;
	cin >> num_carros;
	
	carros dados[num_carros];
	
	//Estrutura que preenche os dados.
	for(int i = 0; i < num_carros; i++){
		
		cin >> dados[i].nome;
		cin >> dados[i].ano;
		cin >> dados[i].preco;
		
	}
	
	int preco_referencia;
	cin >> preco_referencia;
	
	// Estrutura que faz a verificação do preço.
	for(int i = 0; i < num_carros; i++){
		if(dados[i].preco < preco_referencia){
			cout << dados[i].nome << " ";
			cout << dados[i].ano << " ";
			cout << dados[i].preco << "\n";
		}
	}
	return 0;
}
