# include <iostream>
using namespace std;


void divisor(int N,int& segundo_menor, int& segundo_maior);

int main (){

    int num;// Número a ser analisado.
    int segundo_menor = 0;
    int segundo_maior = 0;

    cin >> num;// Insira o número desejado.

    divisor(num,segundo_menor, segundo_maior);// Aplique a função "divisor" em "num"

    cout << segundo_menor << " " << segundo_maior;
    

    return 0;
}

// Função que irá calcular os divisores de um número e decidirá qual o segundo menor e o segundo maior.
void divisor(int N,int& segundo_menor, int& segundo_maior){// Parâmetro da função;

    int cont = N;// contador recebe o valor do número inserido
    int div;// divisor do número.
    int q1 = 0, q2 = 0;// contadores.
    int aux = N;//auxiliar

    while(cont >= 1){// A divisão será feita até o "cont" chegar em 1
        
        if( N % cont == 0 ){
            div =  N / cont;
            cout << div << "\n";
            q1++;
        }
        if(q1 == 2){// O segundo menor sempre será o segundo dígito.
            segundo_menor = div;
        }
          
        cont--;// contador -1.
    }

    N = aux;
    cont = 1;

    while(cont <= N){
        if( N % cont == 0 ){
        div =  N / cont;
        q2++;
        }
        if(q2 == 2){// O segundo maior sempre será o segundo dígito
            segundo_maior = div;
        }
        cont++;
    }

    if (q2 == 2){
        aux = segundo_menor;
        segundo_menor = segundo_maior;
        segundo_maior = aux;
    }

}
