#include <iostream>
using namespace std;

void preencher(int quantidade, int vetor[]);
void selection(int vetor[], int tam);

int main(){

    int quantidade;
    cin >> quantidade;

    int vetor[quantidade];
    preencher(quantidade, vetor);
    selection(vetor, quantidade);

    for(int i = 0; i < quantidade; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}

void preencher(int quantidade, int vetor[]){

    for(int i = 0; i < quantidade; i++){
        cin >> vetor[i];
    }
}

void selection(int vetor[], int tam){

    int maior, aux_troca;
    for(int indice = 0; indice < tam-1; indice++){
        maior = indice;
        for (int j = indice + 1; j < tam; j++){
            if (vetor[j] > vetor[maior]){
                maior = j;    
            }
        }
        aux_troca = vetor[indice];   
        vetor[indice] = vetor[maior];
        vetor[maior] = aux_troca;
    }
}