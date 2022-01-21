#include <iostream>
using namespace std;

struct meme{

	int numeracao;
	string nome;
	string assunto;
	string site;

};

void preencher(meme vetor[], int num);
void selection(meme vetor[], int q_elementos);
void imprime(meme informacoes[], int q_elementos, string site_busca);

int main(){
	
	int q_elementos;
	cin >> q_elementos;
	
	meme informacoes[q_elementos];
	
	preencher(informacoes, q_elementos);
	selection(informacoes, q_elementos);
	
	string site_busca;
	cin >> site_busca;
	
	imprime(informacoes, q_elementos, site_busca);
	
	return 0;
}

// Função que preencherá o vetor de registros.
void preencher(meme vetor[], int num){
	
	for(int i = 0; i < num; i++){
		
		cin >> vetor[i].numeracao;
		cin >> vetor[i].nome;
		cin >> vetor[i].assunto;
		cin >> vetor[i].site;
	}
}

// Função que ordenará os registros.
void selection(meme vetor[], int q_elementos){
	
	int posMenor = 0;
	meme aux;
	
	for (int i=0; i < q_elementos - 1; ++i) {
		posMenor = i;
		for (int j=i+1; j < q_elementos; ++j) {
			if (vetor[j].numeracao < vetor[posMenor].numeracao){
				posMenor = j;
			}
		}
		aux = vetor[i];
		vetor[i] = vetor[posMenor];
		vetor[posMenor] = aux;
	}
}

// Função que imprime os dados de acordo com o site escolhido.
void imprime(meme informacoes[], int q_elementos, string site_busca){
	
	bool temSite = false;
	
	for(int i = 0; i < q_elementos; i++){
		
		if(informacoes[i].site == site_busca){
			
			cout << informacoes[i].numeracao << " ";
			cout << informacoes[i].nome << " ";
			cout << informacoes[i].assunto << " ";
			cout << informacoes[i].site << "\n";
			temSite = true;
		}
	}
	
	if(temSite == false){
		cout << "Inexistente" << "\n";
	}
}

