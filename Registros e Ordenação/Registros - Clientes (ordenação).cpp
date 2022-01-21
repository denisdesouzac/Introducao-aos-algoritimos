#include <iostream>
using namespace std;

struct cliente{
    int codigo;
    float valor;
};

void selection(cliente vetor[], int tam);

int main(){

    int id, i = 0, tam = 100, cont = 1;
    float custo;

    cliente dados[tam];

    while((id != -1) and (i < tam)){

        cin >> id;

        if(id != -1){
            cin >> custo;
            dados[i].codigo= id;
            dados[i].valor = custo;
        }
        cont++;
        i++;
    }

    tam = cont;
    selection(dados, tam);

    int valor_comparacao;
    cin >> valor_comparacao;
    bool tem_compradores = false;

    for(int j = 0; j < tam; j++){
        if(dados[j].valor >= valor_comparacao){
            cout << dados[j].codigo << " ";
            cout << dados[j].valor << "\n";
            tem_compradores = true;
        }
    }

    if(tem_compradores == false){
        cout << -1 << "\n";
    }

    return 0;
}

void selection(cliente vetor[], int tam){

    int menor;
    cliente aux_troca;
    for(int indice = 0; indice < tam-1; indice++){
        menor = indice;
        for (int j = indice + 1; j < tam; j++){
            if (vetor[j].codigo < vetor[menor].codigo){
                menor = j;    
            }
        }
        aux_troca = vetor[indice];   
        vetor[indice] = vetor[menor];
        vetor[menor] = aux_troca;
    }
}