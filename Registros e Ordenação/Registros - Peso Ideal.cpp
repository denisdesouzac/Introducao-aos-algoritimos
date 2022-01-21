#include <iostream>
using namespace std;

struct pacientes{
	
	string nome;
	char sexo;
	float altura;
	float peso;
};

struct irregularidade_peso{
	
	string nome;
	float peso_fora_do_ideal;
};

void preencher( pacientes dados[], int n_pacientes);
void mais_pesado(pacientes dados[], int n_pacientes);
void peso_ideal(pacientes dados[], int n_pacientes,irregularidade_peso informacoes[]);
void imprime(int n_pacientes,irregularidade_peso informacoes[]);

int main(){
	
	int n_pacientes;
	
	cin >> n_pacientes;// Digite o número de pacientes.
	
	pacientes dados[n_pacientes];
	
	preencher(dados, n_pacientes);
	
	mais_pesado(dados, n_pacientes);
	
	irregularidade_peso informacoes[n_pacientes];
	
	peso_ideal(dados, n_pacientes, informacoes);
	
	imprime(n_pacientes, informacoes);
	
	return 0;
}

// Função para preencher os registros dos pacientes.
void preencher(pacientes dados[], int n_pacientes){
	
	for(int i = 0; i < n_pacientes; i++){
		
		cin >> dados[i].nome;
		cin >> dados[i].sexo;
		cin >> dados[i].altura;
		cin >> dados[i].peso;
		}
	
}

// Função que irá apontar o mais pesado dos pacientes.
void mais_pesado(pacientes dados[], int n_pacientes){
	
	float maior_peso = 0;
	string pesado;
	
	for(int i = 0; i < n_pacientes; i++){
		
		if(dados[i].peso > maior_peso){
			maior_peso = dados[i].peso;
			pesado = dados[i].nome;
		}
	}
	
	cout << pesado << "\n";
	
}

// Função que irá calcular o peso que falta para chegar ao peso ideal.
void peso_ideal(pacientes dados[], int n_pacientes,irregularidade_peso informacoes[]){
	
	float pesoI;
	
	for(int i = 0; i < n_pacientes; i++){
		
		if( dados[i].sexo == 'H' ){
			
			pesoI =( 72.7 * dados[i].altura) - 58;
			pesoI = pesoI - dados[i].peso;
			
			informacoes[i].nome = dados[i].nome;
			informacoes[i].peso_fora_do_ideal = pesoI;
			
		}else{
			
			pesoI = (62.1 * dados[i].altura) - 44.7;
			pesoI = pesoI - dados[i].peso;
			
			informacoes[i].nome = dados[i].nome;
			informacoes[i].peso_fora_do_ideal = pesoI;
		}
	}
}

// Função que irá imprimir os pacientes e os pesos que faltam para ficar em forma.
void imprime(int n_pacientes,irregularidade_peso informacoes[]){
	
	for(int i = 0; i < n_pacientes; i++){
		
		if(informacoes[i].peso_fora_do_ideal < 0){
			
			cout << informacoes[i].nome << " ";;
			cout << informacoes[i].peso_fora_do_ideal << "\n";
		}
	}
	
	for(int i = 0; i < n_pacientes; i++){
		
		if(informacoes[i].peso_fora_do_ideal > 0){
			
			cout << informacoes[i].nome << " ";;
			cout << informacoes[i].peso_fora_do_ideal << "\n";
		}
	}
}
