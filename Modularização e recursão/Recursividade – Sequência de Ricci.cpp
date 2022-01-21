#include <iostream>
using namespace std;

int ricci(int num1, int num2, int num3, int cont, int proximo);

int main(){

	int num1 , num2;
	int num3;
	int cont= 1;
	int proximo = 0;
	
	cin >> num1 >> num2;
	cin >> num3;// número da sequência.
	
	ricci(num1, num2, num3, cont, proximo);
	
    return 0;
}

int ricci(int num1, int num2, int num3, int cont, int proximo){
	
	if(cont == 1){
		if(num3 > 1){
		cont ++;
		}
		cout << num1 << " ";
	}
	if(cont == 2){
		if(num3 > 2){
			cont ++;
		}
		cout << num2 << " ";
	}if(cont >= 3 and cont <= num3){
		proximo = num2 + num1;
		cout << proximo << " ";
		num1 = num2;		
		num2= proximo;
		return ricci(num1,  num2,  num3, ++cont, proximo);
	}
	return 0;
}
