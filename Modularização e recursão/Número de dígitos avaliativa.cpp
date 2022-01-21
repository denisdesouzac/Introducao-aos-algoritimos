# include <iostream>
using namespace std;

int contador(int N, int& resultado);

int main(){

    int num, resultado = 0;

    cin >> num;// Insira um número

    contador(num, resultado);

    cout << resultado;// Leia o valor de "resultado".

    return 0;
}

// Função que irá contar quantos dígitos tem o número.
int contador(int N, int& resultado){

    if(N < 0){// Se N for um número negativo...
        N = N * (-1);// Será multiplicado por -1.
    }
    if(N < 10){
        resultado++;
        return resultado;
    }

    if( N != 0 ){// Se o número que foi dividido foi maior que 0...
        N = N /10;// O número recebe 1/10 do seu valor anterior.
    }
	 return contador(N, ++resultado);// Chama a função contador novamente incrementando o resultado.
}
