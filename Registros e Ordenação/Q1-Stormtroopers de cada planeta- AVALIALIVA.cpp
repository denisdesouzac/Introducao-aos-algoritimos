#include <iostream>
using namespace std;

struct Stormtroopers{
	
	string nome;
	string planeta;
	int batalhas;
	
};

struct saida{
	
	string planet;
	int numero_S;
	float media;
	
};

void preencher(Stormtroopers informacoes[], int q_Stormtroopers);
void dados_saida(saida planetas[], int& tamanho_capacidade, string nome_planeta, int batalha);
void imprimir(saida planetas[], int tamanho_capacidade);

int main(){
	
	int q_Stormtroopers;
	
	cin >> q_Stormtroopers;// Digite a quantidade de Stormtroopers.
	
	Stormtroopers informacoes[q_Stormtroopers];
	preencher(informacoes, q_Stormtroopers);
	
	saida planetas[q_Stormtroopers];
	
	int tamanho_capacidade = 0;
	
	// Inicializar variáveis.
	for(int i = 0; i < q_Stormtroopers; i++){
		planetas[i].media = 0;
		planetas[i].numero_S= 0;
	}
	
	for(int i = 0; i < q_Stormtroopers; i++){
		dados_saida(planetas, tamanho_capacidade,
					informacoes[i].planeta, informacoes[i].batalhas);
	}
	
	// Estrutura que irá calcular a média de batalhas por planeta.
	for(int i = 0; i < tamanho_capacidade; i++){
		planetas[i].media = planetas[i].media / planetas[i].numero_S;
	}
	
	imprimir(planetas, tamanho_capacidade);
	
	return 0;
}

// Função que preencherá os regitros com as informações dos Stormtroopers.
void preencher(Stormtroopers informacoes[], int q_Stormtroopers){
	
	for(int i = 0; i < q_Stormtroopers; i++){
		cin >> informacoes[i].nome;
		cin >> informacoes[i].planeta;
		cin >> informacoes[i].batalhas;
	}
}

// Função que contará o número de Stormtroopers por planeta.
void dados_saida(saida planetas[], int& tamanho_capacidade, string nome_planeta, int batalha){
	
	int i = 0;
	
	while((i < tamanho_capacidade) and (planetas[i].planet != nome_planeta)){
		i++;
	}
	
	
	if(i < tamanho_capacidade){
		planetas[i].numero_S++;
		planetas[i].media += batalha;
	}else{
		
		planetas[i].planet  = nome_planeta;
		planetas[i].numero_S++;
		planetas[i].media += batalha;
		tamanho_capacidade++;
	}
}

// Função que realizará a impressão dos dados de saída.
void imprimir(saida planetas[], int tamanho_capacidade){
	
	for(int i = 0; i < tamanho_capacidade; i++){
		cout << planetas[i].planet << " " << planetas[i].numero_S << " "
			 << planetas[i].media << "\n";
	}
}
