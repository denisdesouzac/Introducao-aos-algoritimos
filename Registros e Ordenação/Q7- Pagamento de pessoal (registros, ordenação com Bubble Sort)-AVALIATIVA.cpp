#include <iostream>
using namespace std;

struct funcionario{
	
	int identificador;
	float h_trabalhadas;
	float valor_hora;
	float salario;
	
};

void preencher(funcionario vetor[], int tamanho);
void pagamento(funcionario dados[], int n_funcionarios);
void bubble(funcionario vetor[], int n_funcionarios);
void imprimir(funcionario dados[], int n_funcionarios);

int main(){
	
	int n_funcionarios;
	cin >> n_funcionarios;//Digite o número de funcionários.
	
	funcionario dados[n_funcionarios];
	
	preencher(dados, n_funcionarios);
	pagamento(dados, n_funcionarios);
	bubble(dados, n_funcionarios);
	imprimir(dados, n_funcionarios);
	
	return 0;
}

// Função que preenche os dados dos funcionários.
void preencher(funcionario vetor[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		cin >> vetor[i].identificador;
		cin >> vetor[i].h_trabalhadas;
		cin >> vetor[i].valor_hora;
	}
}

// Função que calcula o pagamento de cada funcionário.
void pagamento(funcionario dados[], int n_funcionarios){
	
	float cash;
	
	for(int i = 0; i < n_funcionarios; i++){
		cash = dados[i].h_trabalhadas * dados[i].valor_hora;
		dados[i].salario = cash;
	}
}

// Função que ordena os funcionários de acordo com o salário.
void bubble(funcionario vetor[], int n_funcionarios){
	
	funcionario aux;
	
	for (int i = 0; i < n_funcionarios - 1; i++) {
		for (int j = 0; j < n_funcionarios-1-i; j++) {
			if (vetor[j].salario > vetor[j+1].salario) {
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
}

// Função que imprime o resultado.
void imprimir(funcionario dados[], int n_funcionarios){
	
	for(int i = 0; i < n_funcionarios; i++){
		cout << dados[i].identificador<< " ";
		cout << dados[i].salario<< endl;
	}
}
