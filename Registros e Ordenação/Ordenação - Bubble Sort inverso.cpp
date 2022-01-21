#include <iostream>
using namespace std;

void preencher(int quantidade, int vetor[]);
void bubble_sort(int vetor[], int tam);

int main(){

    int quantidade;
    cin >> quantidade;

    int vetor[quantidade];
    preencher(quantidade, vetor);
    bubble_sort(vetor, quantidade);

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

void bubble_sort(int vetor[], int tam){
    int aux_troca;
    for (int i = 0; i < tam-1; i++){
        for (int j = 0; j < tam-1-i; j++){
             if (vetor[j] < vetor[j+1]){
                aux_troca = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux_troca;    
            }
        }
    }
}