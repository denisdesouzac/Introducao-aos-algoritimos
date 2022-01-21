#include <iostream>
using namespace std;

void preencher(int preco[], int quant_v[], int tamanho);

void preco_total(int preco[], int quant_v[], int tamanho, int& total);

void salario(int total);

void mais_vendido(int preco[], int quant_v[], int tamanho);

int main(){
	
	int total = 0;
	int tamanho = 10;
	int preco[tamanho];
	int quantidade_vendida[tamanho];

	preencher(preco, quantidade_vendida, tamanho);

	preco_total(preco, quantidade_vendida, tamanho, total);

	salario(total);

	mais_vendido(preco, quantidade_vendida, tamanho);

	return 0;
}

// Função que irá dar valor as posições do vetor.
void preencher(int preco[], int quant_v[], int tamanho){

	for(int i = 0; i < tamanho; i++){
	cin >> preco[i];
	cin >> quant_v[i];
	}
}

//Função que informa o valor de cada venda por produto e soma esses valores.
void preco_total(int preco[], int quant_v[], int tamanho, int& total){
	
	// Estrutura que irá calcular o preço total das vendas.
	for( int i = 0; i < tamanho; i++){
		cout << quant_v[i] << " " << preco[i] << " ";
		cout << quant_v[i] * preco[i] << "\n";
		total += quant_v[i] * preco[i];
	}	
}

// Fução que calcula o valor do salário de acordo com o total.
void salario(int total){
	int pagamento;
	int porcentagem;
	
	porcentagem = (5 * total) /100;
	
	pagamento = 900 + porcentagem;
	
	cout << total << " " << pagamento << "\n";

}

// Fução que irá informar a posição do mais vendido e o preço.
void mais_vendido(int preco[], int quant_v[], int tamanho){
	
	int maior_venda = 0;
	int preco_maior_vendida = 0;
	int posicao = 0;
	
	for(int i = 0; i < tamanho ; i++){
		if(quant_v[i] > maior_venda){
			maior_venda = quant_v[i];
			preco_maior_vendida = preco[i];
			posicao = i;
		}
	}
	cout << preco_maior_vendida << " " << posicao << "\n";
}
