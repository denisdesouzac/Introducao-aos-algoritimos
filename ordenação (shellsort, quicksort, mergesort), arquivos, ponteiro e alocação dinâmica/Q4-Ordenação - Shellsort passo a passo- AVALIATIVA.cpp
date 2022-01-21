#include <iostream>
using namespace std;

void preencher(int vetor[], int tamanho);
void preencher2(float vetor[], int tamanho);
void shell_sort(float valores[], int quantidade_valores, int saltos[], int quantidade_saltos);

int main(){

    int quantidade_saltos, quantidade_valores;

    cin >> quantidade_saltos;
    int saltos[quantidade_saltos];
    preencher(saltos, quantidade_saltos);

    cin >> quantidade_valores;
    float valores[quantidade_valores];
    preencher2(valores, quantidade_valores);

    shell_sort(valores, quantidade_valores, saltos, quantidade_saltos);

    return 0;
}


void preencher(int vetor[], int tamanho){

    for(int i = 0; i < tamanho; i++){
        cin >> vetor[i]; 
    }
}

void preencher2(float vetor[], int tamanho){

    for(int i = 0; i < tamanho; i++){
        cin >> vetor[i]; 
    }
}

// Função que ordenará o vetor.
void shell_sort(float valores[], int quantidade_valores, int saltos[], int quantidade_saltos){

    int pos_salto = quantidade_saltos - 1;
    while (saltos[pos_salto] > quantidade_valores) {
        pos_salto--;
    }

    float value;
    int j;
    
    while ( pos_salto >= 0 ) {
        int salto = saltos[pos_salto];
          
            for (int i = salto; i < quantidade_valores; i++) {
                value = valores[i];
                j = i;
                cout << saltos[pos_salto] << ":" << "	";

                int k = 0;
                while(k < quantidade_valores){

                    cout << valores[k];
                    if(valores[k] == value){
                        cout << "!" << "	";
                    }else{
                        cout << "	";
                    }

                    k++;
                }
                cout << "\n";

                while ((j >= salto) and (value < valores[j - salto])) {
                    
                    valores[j] = valores[j - salto];
                    j= j - salto;
                }
                valores[j] = value;

                cout << "  "<< "	";
                for(int k = 0; k < quantidade_valores; k++){
                    cout << valores[k] <<"\t";
                }
                cout << "\n";
            }
        pos_salto--;
    }
}
