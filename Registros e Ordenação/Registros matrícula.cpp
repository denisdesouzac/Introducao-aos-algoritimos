#include <iostream>
using namespace std;

struct aluno {
    int id;
    int matricula;
};

void preencher(int quantidade, aluno vetor[]);
void preencher2(int quantidade, int vetor[]);
void selection(aluno vetor[], int tam);
int busca(aluno vetor[], int pos_inicial, int pos_final, int num_buscado);

int main(){

    int quantidade;
    cin >> quantidade;

    aluno vetor[quantidade];
    preencher(quantidade, vetor);
    selection(vetor, quantidade);

    int busca_id[4];
    preencher2(4, busca_id);

    for(int i = 0; i < quantidade; i++){
        cout <<  vetor[i].id << " ";
    }

    cout << "\n";

    int analise;
    for(int i = 0; i < 4; i++){
        analise = busca(vetor, 0, quantidade-1, busca_id[i]);
        if(analise != -1){         
            cout << vetor[analise].matricula << "\n";
        }else{
            cout << 0 << "\n";
        }
        
    }

    return 0;
}

// Preenche um vetor de registros.
void preencher(int quantidade, aluno vetor[]){

    for(int i = 0; i < quantidade; i++){
        cin >> vetor[i].id;
        cin >> vetor[i].matricula;
    }
}

// Preenche um vetor comum.
void preencher2(int quantidade, int vetor[]){

    for(int i = 0; i < quantidade; i++){
        cin >> vetor[i];
    }
}

// Função de ordenação.
void selection(aluno vetor[], int tam){

    int menor;
    aluno aux_troca;
    for(int indice = 0; indice < tam-1; indice++){
        menor = indice;
        for (int j = indice + 1; j < tam; j++){
            if (vetor[j].id < vetor[menor].id){
                menor = j;    
            }
        }
        aux_troca = vetor[indice];   
        vetor[indice] = vetor[menor];
        vetor[menor] = aux_troca;
    }
}

// Função que irá fazer a busca binária.
int busca(aluno vetor[], int pos_inicial, int pos_final, int num_buscado){
	
	while(pos_inicial <= pos_final){
		
		int meio = (pos_inicial + pos_final) /2;
		if(num_buscado == vetor[meio].id){
			return meio;
		}else{
			if(num_buscado > vetor[meio].id){
				pos_inicial = meio + 1;
			}else{
				pos_final = meio - 1;
			}
		}
	}
	return -1;
}
