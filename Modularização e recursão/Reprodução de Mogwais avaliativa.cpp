#include <iostream>
using namespace std;

int fibonacci(int N);

int main(){
	
    int num, n = 1;

    cin >> num;// Escreva a o número de etapas de reprodução dos Mogwais.
    // 
    while(num >= n){// Aplique a função fibonacii "num" vezes.
        cout << fibonacci(n) << " ";// Função fibonacci em (n).
        n++;
    }
	
	return 0;
}
// Função que calcula a quantidade de filhotes em uma etapa.
int fibonacci(int n){ 

    if(n == 1 or n == 2){// Se n for "1" ou "2" retorne 1.
        return 1;
    }else{// Senão retorne o cálculo...
        return fibonacci( n - 1 ) + fibonacci( n - 2 );
    }

}