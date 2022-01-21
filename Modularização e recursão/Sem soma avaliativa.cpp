#include <iostream>
using namespace std;

int sucessor(int& num);

int antecessor(int& num);

int adicao(int& num1 , int& num2);

int main(){

	int X, Y,soma;
	
	cin >> X;// Primero número.
	cin >> Y;// Segundo número.
	
	adicao(X,Y);
	
	soma = Y;
	
	cout << soma;// Imprima soma.

	return 0;
}

// Função que irá calcular a soma.
int adicao(int& num1 ,int& num2){
	
	if(num1 > 0){					//	Enquanto o número 1 não for "0"...
									
		antecessor(num1);			//	O número 1 vai ser subtraido de um em um.
		sucessor(num2);				//	O número 2 vai ser adicionado de um em um.
		return adicao(num1, num2);
		
	}else if(num1 == 0){
		
		return 0;
			
	}else{                          //Processo reverso.
		
		antecessor(num2);
		sucessor(num1);
		return adicao(num1, num2);
			
	}
}

int sucessor(int& num){
	num++;
	return num;
}

int antecessor(int& num){
	num--;
  return num;
}
