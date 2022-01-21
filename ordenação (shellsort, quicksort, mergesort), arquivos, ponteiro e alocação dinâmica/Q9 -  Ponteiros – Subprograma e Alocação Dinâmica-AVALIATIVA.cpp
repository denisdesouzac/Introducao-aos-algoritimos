#include <iostream>
using namespace std;

float* obterVetor(int &n);

int main(){

    int n, m;
    cin >> n;// n = tamanho;
    cin >> m;// m = valor de limite;

    float* vetor = obterVetor(n);

    for(int i = m; i < n; i++){
        cout << vetor[i] << endl;
    }

    delete [] vetor;

    return 0;
}

float* obterVetor(int &n){

    float* vetor = new float[n];
    int fatorial = 0;
    float valor = 0.0;

    for(int i = 0; i < n; i++){

        if(i > 0){
            fatorial *= i;
        }else if(i == 0){
            fatorial = 1;
        }

        valor = ( i * i + 1.75 ) / ( 2 * fatorial + i );// Cálculo do valor a ser colocado na posição.

        vetor[i] = valor;
    }

    return vetor;
}

