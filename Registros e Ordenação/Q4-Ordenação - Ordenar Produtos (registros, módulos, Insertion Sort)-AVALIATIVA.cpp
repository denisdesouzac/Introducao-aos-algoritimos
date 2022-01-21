#include <iostream>
using namespace std;

struct produto{
	
	int identificador;
	string descricao;
	float preco;
	
};

void preencher(produto vetor[], int num);
void insertion(produto dados[], int quantidade_produtos);
void pesquisa(produto dados[], int quantidade_produtos, float lim_inferior, float lim_superior);

int main(){
	
	int quantidade_produtos;
	cin >> quantidade_produtos;
	
	produto dados[quantidade_produtos];
	
	preencher(dados, quantidade_produtos);
	insertion(dados, quantidade_produtos);
	
	float lim_inferior, lim_superior;
	
	cin >> lim_inferior;// Limite inferior.
	cin >> lim_superior;// Limite superior.
	
	pesquisa(dados, quantidade_produtos, lim_inferior, lim_superior);
	
	return 0;
}

// Função que preencherá o vetor de registros.
void preencher(produto vetor[], int num){
	
	for(int i = 0; i < num; i++){
		
		cin >> vetor[i].identificador;
		cin.ignore(2, '\n');
		getline(cin,vetor[i].descricao);
		cin >> vetor[i].preco;
	}
}

// Função que ordenará os registros de acordo com o preço;
void insertion(produto dados[], int quantidade_produtos){
	
	float pivo;
	int j;
	produto pivo2;
	
	for(int i = 1; i < quantidade_produtos; i++){
		
		pivo = dados[i].preco;
		pivo2 = dados[i];
		j = i - 1;
		
		while((j >= 0) and (pivo < dados[j].preco)){
			dados[j+1] = dados[j];
			j--;
		}
		dados[j+1].preco = pivo;
		dados[j+1] = pivo2;
	}
}

// Função que imprime os produtos de acordo com os valores de máximo e mínimo.
void pesquisa(produto dados[], int quantidade_produtos, float lim_inferior, float lim_superior){
	
	bool verificar = false;
	
	for(int i = 0 ; i < quantidade_produtos; i++){
		
		if((dados[i].preco <= lim_superior) and (dados[i].preco >= lim_inferior)){
			cout << dados[i].identificador << " ";
			cout << '"'<<dados[i].descricao << '"'<< " ";
			cout << dados[i].preco << "\n";
			verificar = true;
		}
	}
	
	if(verificar == false){
		cout << "Inexistente"<< "\n";
	}
}
