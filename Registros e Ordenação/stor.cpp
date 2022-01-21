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
	int media;
	
};

void preencher(Stormtroopers informacoes[], int q_Stormtroopers);
void dados_saida(saida planetas[], int& tamanho_capacidade, string nome_planeta, int batalha);
void imprimir(saida planetas[], int tamanho_capacidade);

int main(){
	
	int q_Stormtroopers;
	
	cin >> q_Stormtroopers;
	
	Stormtroopers informacoes[q_Stormtroopers];
	preencher(informacoes, q_Stormtroopers);
	
	saida planetas[q_Stormtroopers];
	
	int tamanho_capacidade = 0;
	
	for(int i = 0; i < q_Stormtroopers; i++){
		dados_saida(planetas, tamanho_capacidade,
					informacoes[i].planeta, informacoes[i].batalhas);
	}
	
	imprimir(planetas, tamanho_capacidade);
	
	return 0;
}

void preencher(Stormtroopers informacoes[], int q_Stormtroopers){
	
	for(int i = 0; i < q_Stormtroopers; i++){
		cin >> informacoes[i].nome;
		cin >> informacoes[i].planeta;
		cin >> informacoes[i].batalhas;
	}
}

void dados_saida(saida planetas[], int& tamanho_capacidade, string nome_planeta, int batalha){
	
	int i = 0;
	int total_batalhas = 0;
	
	while((i < tamanho_capacidade) and (planetas[i].planet != nome_planeta)){
		i++;
	}
	
	if(i < tamanho_capacidade){
		planetas[i].numero_S += 1;
		total_batalhas += batalha;
	}else{
		
		planetas[i].planet  = nome_planeta;
		int conta = total_batalhas/ planetas[i].numero_S;
		planetas[i].media = conta;
		tamanho_capacidade++;
	}
}

void imprimir(saida planetas[], int tamanho_capacidade){
	
	for(int i = 0; i < tamanho_capacidade; i++){
		cout << planetas[i].planet << " " << planetas[i].numero_S << " "
			 << planetas[i].media << "\n";
	}
}
