#include <iostream>
using namespace std;

void procura_elemento(int **matriz, int elemento, int quantidade_linhas, int quantidade_colunas, int *ponteiro_posicao);

int main(){

    int quantidade_linhas, quantidade_colunas;
    cin >> quantidade_linhas >> quantidade_colunas;
    int **matriz;

    matriz = new int* [quantidade_linhas];
    for(int i = 0; i < quantidade_linhas; i++){
        matriz[i] = new int [quantidade_colunas];
    }

    // Estrutura que preenche a matriz.
    for(int i = 0; i < quantidade_linhas; i++){
        for(int j = 0; j < quantidade_colunas; j++){
            cin >> matriz[i][j];
        }
    }

    int elemento;
    cin >> elemento;
    int posicao[2];
    int *ponteiro_posicao = posicao;
    ponteiro_posicao[0] = -1;
    ponteiro_posicao[1] = -1;

    procura_elemento(matriz, elemento, quantidade_linhas, quantidade_colunas, ponteiro_posicao);

    if(ponteiro_posicao[0] != -1){
        cout << ponteiro_posicao[0] << " ";
        cout << ponteiro_posicao[1] << "\n";
    }else{
        cout << "ausente" << "\n";
    }
    
    for(int i = 0; i < quantidade_linhas; i++){
        delete[] matriz[i];
    }

    return 0;
}

// Função que procura a posição do elemento.
void procura_elemento(int **matriz, int elemento, int quantidade_linhas, int quantidade_colunas, int *ponteiro_posicao){

    for(int i = 0; i < quantidade_linhas; i++){
        for(int j = 0; j < quantidade_colunas; j++){
            if(matriz[i][j] == elemento){
                ponteiro_posicao[0] = i;
                ponteiro_posicao[1] = j;
                quantidade_linhas = i;
                quantidade_colunas = j;
            }
        }
    }
}
